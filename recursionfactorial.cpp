#include <iostream>
int factorial(int num);
int main () {

    std::cout << factorial(10);

    return 0;
}
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);  //funct call after funct call after funct call.................
        //take this as num=9 then 9* 8*7*6*5*4*3*2*1
    }
    else{
        return 1;
    }
}