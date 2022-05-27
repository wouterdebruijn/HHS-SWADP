// ================================================================
// Infrastructure Layer
// ================================================================
#include <iostream>
#include <list>
using namespace std;
class Subject;
class Observer
{
private:
    Subject *S;

protected:
    Subject *getSubject() const { return S; }

public:
    Observer(Subject *s);
    virtual ~Observer();
    virtual void update() = 0;
};
class Subject
{
private:
    list<Observer *> L;

protected:
    virtual void notify();

public:
    Subject() {}
    virtual ~Subject() {}
    virtual void insert(Observer *s) { L.push_front(s); }
    virtual void remove(Observer *s) { L.remove(s); }
};
void Subject::notify()
{
    for (list<Observer *>::iterator i = L.begin(); i != L.end(); ++i)
        (*i)->update();
}
Observer::Observer(Subject *s) : S(s)
{
    getSubject()->insert(this);
}
Observer::~Observer()
{
    getSubject()->remove(this);
}

// ================================================================
// DomainLayer
// ================================================================
class Element
{
public:
    virtual ~Element() {}
    virtual string name() = 0;
};
class Ninja : public Element, public Subject
{
private:
    string Name;
    int Lives;

public:
    Ninja(string n) : Name(n), Lives(1) {}
    virtual string name() { return Name; }
    virtual int lives() { return Lives; }
    virtual void incLevens()
    {
        Lives++;
        notify();
    }
    virtual void decLevens()
    {
        Lives--;
        notify();
    }
};

// ================================================================
// Interfacelayer
// ================================================================
class NinjaWindow : public Observer
{
private:
    Ninja &N;

public:
    NinjaWindow(Ninja &n) : Observer(&n), N(n) {}
    virtual ~NinjaWindow() {}
    virtual void draw() { cout << N.name() << N.lives(); }
    virtual void update() { draw(); }
};
int main()
{
    Ninja h("Henk"), j("Joop");
    NinjaWindow hW(h), jW(j);

    h.incLevens();
    h.incLevens();
    j.incLevens();
    j.incLevens();
    j.incLevens();
    h.incLevens();
    return 0;
}