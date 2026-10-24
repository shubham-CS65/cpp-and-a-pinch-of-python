#include <iostream>
 
int main()
{
   int number;        //DOES BLOCK OF CODE FIRST THEN CHECKS CONDITION AGN ND AGN
   //instead of:
   // std::cout << "Enter a positive #: "; if this and next line r not there then num will be 0 by default beacause we have nt assigned any value to num
    //  std::cin >> number;
    // while num<0{
    //  cout<<"enter num"
    //  cin>>num
    //cout<<the num is<<num
    //}

   do{
      std::cout << "Enter a positive #: ";
      std::cin >> number;//EXECUTE AANADHUKU APRAM COND CHECK PANNUM FALSE A IRUNDHA ORU ITERATION AVUDHU PANTU DHAN CONDITION KE POGUMMMM
   }while(number < 0);

   std::cout << "The # is: " << number;

   return 0;
}

