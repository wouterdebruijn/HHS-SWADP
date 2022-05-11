#ifndef OBSERVER_H
#define OBSERVER_H

#include <list>

using namespace std;

class Subject;

class Observer
{
private:
  Subject *subject;

protected:
  Subject *getSubject() const;

public:
  Observer(Subject*);
  virtual ~Observer();
  virtual void update() = 0;
};
#endif // OBSERVER_H