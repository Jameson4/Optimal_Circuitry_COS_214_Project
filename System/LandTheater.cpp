#include "LandTheater.h"

LandTheater::LandTheater(country *c,int s):Theater(c,s){
    Military=new abstractMilitary**[size];
    for(int i=0;i<size;i++){
        Military[i]=new abstractMilitary*[size];
    }
}
void LandTheater::fight(){
    cout<<"Fighting on Land"<<endl;
    int x,y;
    for(int i=0;i<size;i++){
        x=rand()%size;
        for(int j=0;j<size;j++){
            y=rand()%size;
            if(Military && Military[i] && Military[i][j])
                Military[i][j]->attack(Military[x][y]);
            }
    }    
}