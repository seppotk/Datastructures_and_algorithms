#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue <int> myqueue)
{
   queue <int> secqueue = myqueue;
   while (!secqueue.empty())
   {
      cout << '\t' << secqueue.front();
      secqueue.pop();
   }
   cout << '\n';
}
int main()
   {
      queue <int> myqueue;
      myqueue.push(2);
      myqueue.push(4);
      myqueue.push(6);
      myqueue.push(8);
      cout << "The queue myqueue is : ";
      printQueue(myqueue);
      cout << "\nmyqueue.size() : " << myqueue.size();
      cout << "\nmyqueue.front() : " << myqueue.front();
      cout << "\nmyqueue.back() : " << myqueue.back();
      cout << "\nmyqueue.pop() : ";
      myqueue.pop();
      printQueue(myqueue);
      return 0;
   }