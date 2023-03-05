// https://www.javainuse.com/py2cpp
// https://cpp.sh/

#include <iostream>

int greatestProduct(int array[], int size)
{
    int greatestProductSoFar = array[0] * array[1];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j && array[i] * array[j] > greatestProductSoFar)
            {
                greatestProductSoFar = array[i] * array[j];
                // std::cout << greatestProductSoFar << "!\n";
            }
        }
    }
    return greatestProductSoFar;
}

int main()
{
    int arr[] = {2, 4, 7, 77, 8, 43};
    std::cout << "Greatest product:" << greatestProduct(arr, 6) << "!\n";
}