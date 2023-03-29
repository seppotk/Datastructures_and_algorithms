#include <iostream>
#include <stack>
using namespace std;
void printStack(stack <int> stk)
{
   while (!stk.empty())
      {
         cout << "\t" << stk.top();
         stk.pop();
      }
   cout << "\n";
}
  
int main ()
{
   stack <int> oddstk;
   oddstk.push(1);
   oddstk.push(3);
   oddstk.push(5);
   oddstk.push(7);
   oddstk.push(9);
  
   cout << "The stack is : ";
   printStack(oddstk);
  
   cout << "\nSize of stack: " << oddstk.size();
   cout << "\nTop of stack: " << oddstk.top();
   cout << "\noddstk.pop() : ";
   oddstk.pop();
   printStack(oddstk);
   cout << "\nAnother pop(): ";
   oddstk.pop();
   printStack(oddstk);
   return 0;
}