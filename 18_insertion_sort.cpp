#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // Write your code here.
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (j = i - 1; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n = 7;
    int arr[n] = {2, 19, 87, 26, 44, 99, 76};

    cout << "Array before Sorting...\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element at Index " << i << ": " << arr[i] << endl;
    }

    insertionSort(arr, n);

    cout << "\nArray after Sorting...\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element at Index " << i << ": " << arr[i] << endl;
    }
}