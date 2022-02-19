#include <iostream>
using namespace std;

void swap(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = arr[i];
    }
}
void swapAlternate(int num[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (num[i + 1] < size)
        {
            swap(num[i], num[i + 1]);
        }
    }
}
int main()
{
    int size = 8;
    int num[size] = {2, 4, 6, 8, 1, 3, 5, 7};

    cout << "Printing the Array before swapping : \n";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    swapAlternate(num, size);

    cout << "Printing the Array after swapping : \n";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}