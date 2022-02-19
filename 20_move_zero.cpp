#include <iostream>
using namespace std;

void moveZero(int arr[], int n)
{
    int nonZero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            int temp = arr[j];
            arr[j] = arr[nonZero];
            arr[nonZero] = temp;
            nonZero++;
        }
    }
}

int main()
{
    int n = 9;
    int arr[n] = {1, 5, 0, 3, 0, 7, 0, 9, 99};

    moveZero(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
