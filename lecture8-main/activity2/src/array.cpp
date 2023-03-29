#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
 
using namespace std;
 
int main() {
  array<int, 5> myarray = {1, 1, 2, 3, 5};
   
  cout << "Size of array: " << endl;
  cout << myarray.size() << endl;
   
  cout << "\nmyarray contents: ";
  for (auto i : myarray)
    cout << i << ' ';
     
  // sort operation
 sort(myarray.begin(), myarray.end());
    
   cout << "\nsorted myarray : ";
   for (auto i : myarray)
      cout << i << ' ';
   
   cout<<"\nFirst element of myarray "<<myarray.at(0);
   cout<<endl;
    
   cout<<"FRONT myarray: "<<myarray.front();
   cout<<endl;
   cout<<"BACK myarray: "<<myarray.back();
   cout<<endl;
    
   // Filling ar2 with 10
   myarray.fill(8);
    
  cout << "\nFilled myarray : ";
  for (auto i : myarray)
     cout << i << ' ';
 
return 0;
}