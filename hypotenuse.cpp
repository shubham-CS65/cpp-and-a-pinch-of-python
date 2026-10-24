#include <iostream>
#include<cmath>
int main(){
  float a;
  float b;
  float c;
  std::cout<<"enter the number"<<std::endl;
  std::cin>>a;
  std::cout<<"enter num 2"<<std::endl;
  std::cin>>b;
  c=sqrt(pow(a,2)+pow(b,2));
  std::cout<<"hyputenuse is:"<<c<<std::endl;
  return 0;

}