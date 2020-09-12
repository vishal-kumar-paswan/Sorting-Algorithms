#include <iostream>
using namespace std;
int main()
{
    // array of unsorted elements
    int arr[] = {1, 0, 2, 8, 9, 6, 7, 5, 4, 3};
    int i, j, temp, minIndex;

    // selection sort algorithm
    for (i = 0; i < 10 - 1; i++)
    {
        // minIndex for storing the current index
        minIndex = i;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;

            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    // printing sorted elements using for-ranged loop
    for (int i : arr)
        cout << i << ", ";

    return 0;
}