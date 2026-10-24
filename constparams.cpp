//used to declare a parameter that cant be modified ( useful in reference and pointers)
//it is read only and safe
#include<iostream>
void display(const std::string name,const int age);
int main(){
  std::string x="shubham";
  int age=17;
  display(x,age);





  return 0;
}
void display(const std::string name,const int age){
  std::cout<<"ur name is   :"<<name<<"\n";//u cant modify these vals inside the funct
  std::cout<<"ur age is    :"<<age<<"\n";
}
