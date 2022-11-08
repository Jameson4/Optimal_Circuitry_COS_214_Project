#ifndef Mediator_h
#define Mediator_h
#include"Observer.h"

class Observer;
class Mediator{
    public:
        virtual void reg(Observer *c)=0;
        virtual void DeReg(Observer *c)=0;
        virtual void notify()=0;
};
#endif