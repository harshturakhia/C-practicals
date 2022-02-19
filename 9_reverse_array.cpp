#include <iostream>
using namespace std;

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
    int size = 10;
    int num[size] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    reverseArray(num, size);
}
