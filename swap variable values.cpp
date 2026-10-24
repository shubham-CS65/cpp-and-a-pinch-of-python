#include<iostream>
int main(){
  std::string x = "shubham";
  std::string y="idk";
  std::string temp;

  
  temp=x;
  x=y;
  y=temp;
  std::cout<<"xis"<<x<<std::endl;
  std::cout<<"y is"<<y<<std::endl;


  return 0;
}