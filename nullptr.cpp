#include<iostream>
int main(){   //nullptrs are mostly used to check if an address has been assingned to pointer or not
  int x=10;
  int *ptr=nullptr;
  ptr=&x;
  if(ptr==nullptr){
    std::cout<<"address is not assigned"; //NEVER DEREFERENCE A NULL POINTER **NEVER**
  }
  else{
    std::cout<<"address was assigned";
  }  
  





  return 0;
}