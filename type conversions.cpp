//impict:done automatically,explicit:preceding a value with new data type:
#include <iostream>
int main(){
  float b=(int) 100.55;   //float leter changer to int because of (int) so no decimal point
  std::cout<<b<<std::endl;
  char d=100;
  std::cout<<d;
  return 0;
}