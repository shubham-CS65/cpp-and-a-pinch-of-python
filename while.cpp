#include<iostream>
int main(){
  std::string name;
  while(name.empty()){
    std::cout<<"enter name"<<std::endl;//keeps asking until u give non empty string
    std::getline(std::cin,name);//IF YOU DECLARE INT VAR BUT NOT ASSIGN IT THEN DEFAULT VAL IS 0
    
   
  }
  std::cout<<"ur name is   :"<<name;

  return 0;
}