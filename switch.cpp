#include <iostream>
int main(){
  //switch is used as an alternative for using too many else if
  //it compares one value against matching cases
  int month;
  std::cout<<"enter month"<<std::endl;
  std::cin>>month;
  switch(month){
    case 1:
      std::cout<<"its january"<<std::endl;
      break;
    case 2:
      std::cout<<"its february"<<std::endl;
      break;
     case 3:
      std::cout<<"its march"<<std::endl;
      break; 
     case 4:
      std::cout<<"its april"<<std::endl;
      break;
    default:
      std::cout<<"no month found";     
   
  return 0;
  }
}