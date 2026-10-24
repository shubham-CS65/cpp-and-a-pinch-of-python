#include <iostream>

void swap(std::string &x, std::string &y);

int main()   //it uses & because only passing by reference can we modify the address of the values inside string without & it only gives copy without actually changing the address
{
	std::string x = "Kool-Aid";
	std::string y = "Water";       //see yt vid"pass by val vs pass by reference" for better understanding

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y){
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}