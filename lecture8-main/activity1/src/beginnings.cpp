#include <iostream>
#include <vector>
using namespace std;
int main()
   {
      vector<int> v1;
  
      for (int i = 1; i <= 5; i++)
         v1.push_back(i+1);
  
         cout << "Output of Vector with begin and end: ";
      for (auto i = v1.begin(); i != v1.end(); ++i)
         cout << *i << " ";
  
         cout << "\nOutput of Vector with rbegin and rend: ";
      for (auto itr = v1.rbegin(); itr != v1.rend(); ++itr)
         cout << *itr << " ";
   
         cout << "\nOutput Vector of with cbegin and cend: ";
      for (auto itc = v1.cbegin(); itc != v1.cend(); ++itc)
         cout << *itc << " ";
  
         cout << "\nOutput Vector of with crbegin and crend : ";
      for (auto icr = v1.crbegin(); icr != v1.crend(); ++icr)
         cout << *icr << " ";
         return 0;
}