#ifndef OBSERVER_H
#define OBSERVER_H

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
#endif // OBSERVER_H