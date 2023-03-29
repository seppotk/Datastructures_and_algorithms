#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> myvec = {1, 1, 2, 3, 5, 8};
   cout << "Vector Size : " << myvec.size();
   cout << " Vector Capacity : " << myvec.capacity();
  
   return 0;
}
