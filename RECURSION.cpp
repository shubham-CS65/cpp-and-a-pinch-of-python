#include<iostream>
void walk (int nums);
int main(){
  
  walk(100);




  return 0;
}
void walk (int nums){
  if (nums>0){
    std::cout<<"walk lil bro"<<std::endl;
    walk(nums-1);
  }
    
}