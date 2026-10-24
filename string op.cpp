#include <iostream>
int main(){
  //str.lenght=length of string
  //str.empty=tells if str is empty or not (bool return val)usecase:to see if user typer their name and display results usinf if else
  //str.clear=deletes the string
  //str.append("str")
  //str.at(index) returns the element at tht index
  //str.insert(index,str) it doesnt replace chars it only inserts
  //str.find("char")return index of first occurance of character
  //str.erase(beg index, end-1 index)erases element
  std::string stri;
  stri="hello world";
  std::cout<<stri.erase(1,4);
  return 0;
}