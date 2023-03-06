#include <iostream>
#include <string>
using namespace std;
 
int factorial(int n){
if(n <=1)
  return 1;
else
  return n*factorial(n-1);
}
int main()
 {
   int num,result;
   cout<<"Enter the number whose factorial is to be calculated:"; cin>>num;
   result = factorial(num);
   cout<<num<<"! = "<<result;
  
   return 0;
  }