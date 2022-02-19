#include "bits/stdc++.h"
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int f = arr[0];
    int l = arr[size - 1];

    int mid = (f + l) / 2;

    while (f <= l)
    {
        if (arr[mid] == key)
        {
            return mid;
            // cout << "Key found at : " << i + 1;
        }
        else if (arr[mid] < key)
        {
            f = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }
}

int main()
{
    int size = 6;
    int arr[size] = {2, 4, 6, 7, 8, 9};
    int key = 9;

    // sort(arr.begin(), arr.end());

    cout<<binarySearch(arr, size, key);
}