#include "WaterTheater.h"
WaterTheater::WaterTheater(country *c,int s):Theater(c,s){
    Military=new Military**[size];
    for(int i=0;i<size;i++){
        Military[i]=new Military*[size];
    }
}
void WaterTheater::fight(){

}