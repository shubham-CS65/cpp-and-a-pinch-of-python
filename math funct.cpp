#include <iostream>
#include<cmath>
int main(){
  double x=3;
  double y=2;
  double z=std::max(x,y);
  double a=std::min(x,y);
  std::cout<<z<<std::endl<<a;
  //cmath funtions: pow(num,power),sqrt(num),abs() returns distance from 0,
  //for rounding : round(num), for rounding over(higher): ceil(num), for rounding down: floor(num)
  return 0;
}