//fill() fills remaining elements of an array with a value
//fill(beginning(arr name),end,value)
#include<iostream>
int main(){
  std::string arr[100];
  fill(arr,arr+100,"yooo");
  for (std::string arra:arr){
    std::cout<<arra<<std::endl;
    /*#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}


    */
  }

  return 0;
}
