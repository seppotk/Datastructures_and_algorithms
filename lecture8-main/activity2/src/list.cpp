#include <iostream>
#include <list> // for list operations
using namespace std;
 
int main()
{
   list<int> mylist = {1,1,2};
   list<int>::iterator it = mylist.begin();
   // iterator to point to 4th position
   advance(it, 3);
   // inserts 3 at 4th position
   mylist.insert(it, 3);
   cout << "The list after inserting"
   << " 1 element using insert() is : ";
   for (list<int>::iterator i = mylist.begin();i != mylist.end();i++)
      cout << *i << " ";
      cout << endl;
}
