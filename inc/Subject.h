#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>

using namespace std;

class Observer;
class Subject
{
private:
  list<Observer *> observerList;

protected:
  virtual void notify();

public:
  Subject() {}
  virtual ~Subject() {}
  virtual void insert(Observer *);
  virtual void remove(Observer *);
};

#endif // SUBJECT_H