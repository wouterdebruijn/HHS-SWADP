#include "Observer.h"

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