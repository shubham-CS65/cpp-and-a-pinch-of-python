# include <iostream>
#include <ctime>//u may need this for random nums
int main(){
  //random number generator:
  srand(time(NULL));//seed for num gen
  int num = rand();     //to gen rangom numbers
  std::cout<<num<<std::endl;
  int dice=(rand()%6)+1;//for 6 sided dice
  std::cout<<dice;
  return 0;
}