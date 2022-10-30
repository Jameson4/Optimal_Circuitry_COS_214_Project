#ifndef Mediator_h
#define Mediator_h
#include"observer.h"
class Mediator{
    public:
        virtual void reg(observer *c)=0;
        virtual void DeReg(observer *c)=0;
        virtual void notify()=0;
        virtual void update()=0;
};
#endif