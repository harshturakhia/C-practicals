#include <iostream>
using namespace std;

int findUniqueOccurence(int *arr, int size)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (ans ^ arr[i])
        {
            count++;
        }
    }
    return count;
}
int findUnique(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size = 7;
    int num[size] = {1, 3, 5, 3, 1, 7, 5};

    cout << "Unique elements is : " << findUnique(num, size);
}