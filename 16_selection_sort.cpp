#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // swap(arr[minIndex] , arr[i]);
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Element at Index " << i << ": " << arr[i] << endl;
    }
}
int main()
{
    int n = 8;
    int arr[n] = {12, 9, 56, 32, 99, 39, 78, 1};

    selectionSort(arr, n);
}