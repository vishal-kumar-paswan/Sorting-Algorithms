#include <iostream>
using namespace std;
int main()
{
    // array of unsorted elements
    int arr[] = {1, 0, 2, 8, 9, 6, 7, 5, 4, 3};
    int i, j, temp;

    //sort algorithm
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    //printing sorted elements using for-ranged loop
    for (int i : arr)
        cout << i << ", ";

    return 0;
}