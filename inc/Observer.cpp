#include "Observer.h"
#include "Subject.h"

Observer::Observer(Subject *subject) : subject(subject)
{
  getSubject()->insert(this);
}

Observer::~Observer()
{
  getSubject()->remove(this);
}

Subject *Observer::getSubject() const
{
  return subject;
}