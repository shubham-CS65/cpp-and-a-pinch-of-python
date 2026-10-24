#include <iostream>
namespace car{
  int x=111;

}
namespace bike{
  int x=171;
}
//namespaces are not recommended because it has too many keywords which can overlap with variable names//
int main() {                      
using std::cout;
using std::string;//no need for using std for this specific keyword//
string a="shubham";
cout<<a<<std::endl;
cout<<car::x<<'\n'<<bike::x;
return 0;
}