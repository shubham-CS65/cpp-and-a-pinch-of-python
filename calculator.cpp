#include<iostream>
int main(){
  std::cout<<"*********calculator*********"<<std::endl;
  char op;
  float a;
  float b;
  std::cout<<"enter operation"<<std::endl;
  std::cin>>op;
  std::cout<<"enter num 1"<<std::endl;
  std::cin>>a;
  std::cout<<"enter num 2"<<std::endl;
  std::cin>>b;
  switch(op){
    case '+':
      std::cout<<"sum is:"<<a+b<<std::endl;
      break;
    case '-':
      std::cout<<"sub is:"<<a-b<<std::endl;
      break;  
    case '*':
      std::cout<<"prod is:"<<a*b<<std::endl;
      break;
    case '/':
      std::cout<<"division is:"<<a/b<<std::endl;
      break;
    default :
      std::cout<<"enter valid operator "<<std::endl;      
  } 


  std::cout<<"***************************";
  return 0;
}