#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void maxMinNo(int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    cout << "Max value is : " << max << endl;

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    cout << "Min value is : " << min << endl;
}

int sumofArray(int num[], int size)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        ans = ans + num[i];
    }
    return ans;
}

void reverseArray(int num[], int size)
{
    cout << "Reversing the array : \n";

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(num[start], num[end]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int first[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sizes = sizeof(first) / sizeof(int);

    cout << "Printing the array : \n";
    printArray(first, 10);

    int size;
    cin >> size;

    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    maxMinNo(num, size);

    cout << "Sum of all elements of Array is : \n"
         << sumofArray(num, size)
         << endl
         << endl;

    reverseArray(num, size);
}
