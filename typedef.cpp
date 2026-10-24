//giving new identifier for existing data type
#include <iostream>
typedef std::string text_t;
typedef int number;
int main(){
  number b=100;
  text_t a="this is a text";
  std::cout<<a<<"\n";
  std::cout<<b;
  return 0;
}