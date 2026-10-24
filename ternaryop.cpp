//?:is conditional operator where:
//condition?true stmnt:false stmnt
//u can use bool values for ts too
#include <iostream>
int main(){
  int i=8;
  std::cout<<(i%2==0?"even":"odd");            //both do same 
  i%2==0?std::cout<<"even":std::cout<<"odd";
  return 0;
}