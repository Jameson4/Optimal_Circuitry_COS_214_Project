#include "LandTheater.h"

LandTheater::LandTheater(country *c,int s):Theater(c,s){
    Military=new abstractMilitary**[size];
    for(int i=0;i<size;i++){
        Military[i]=new abstractMilitary*[size];
    }
}
void LandTheater::fight(){

}