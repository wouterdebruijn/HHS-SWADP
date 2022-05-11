#include "Subject.h"
#include "Observer.h"

void Subject::insert(Observer *observer)
{
  observerList.push_front(observer);
}

void Subject::remove(Observer *observer)
{
  observerList.remove(observer);
}

void Subject::notify()
{
  for (list<Observer *>::iterator i = observerList.begin(); i != observerList.end(); ++i)
    (*i)->update();
}