#include<iostream>
#include<string>
using namespace std;
int main(){
  string name;
  cout<<"enter your name"<<endl;        //it doesnt accept space in input
  getline(cin,name);
  cout<<name;                             //to accept space we use getline funct
  return 0;
}