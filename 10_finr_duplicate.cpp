#include <iostream>
using namespace std;

int findDuplicate(int *arr, int size)
{
    // Write your code here
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[j];
            }
        }
    }
}

int main()
{
    int size = 7;
    int num[size] = {1, 2, 3, 4, 5, 6, 3};

    cout << "Duplicate Number is : ";
    cout << findDuplicate(num, size);
}