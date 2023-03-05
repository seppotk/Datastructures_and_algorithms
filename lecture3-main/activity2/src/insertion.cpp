#include <iostream>
using namespace std;
int main()
{
    int myarray[10] = {12, 4, 3, 1, 15, 45, 33, 21, 10, 2};

    cout << "\nInput list is \n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }

    for (int k = 1; k < 10; k++) // k=3
    {
        int temp = myarray[k];               // temp=1
        int j = k - 1;                       // j=2
        while (j >= 0 && temp <= myarray[j]) // 4
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }

    cout << "\nSorted list is \n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }
}