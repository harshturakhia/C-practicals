#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int n = 5;
    int arr[n] = {2, 9, 4, 7, 1};

    cout << "Array before Sorting...\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element at Index " << i << ": " << arr[i] << endl;
    }

    bubbleSort(arr, n);

    cout << "\nArray after Sorting...\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element at Index " << i << ": " << arr[i] << endl;
    }
}