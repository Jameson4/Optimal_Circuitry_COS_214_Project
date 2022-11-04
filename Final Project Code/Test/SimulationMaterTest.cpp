#include<string>
#include<iostream>
int main(){
    std::string p[3]={"1","2","3"};
    std::cout<<p[0];
    for(int i=1;i<3;i++)
       std::cout<<","<<p[i];
    std::cout<<std::endl;
return 0;
}