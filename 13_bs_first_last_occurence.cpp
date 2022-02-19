#include "bits/stdc++.h"
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = arr[0];
    int end = arr[size - 1];
    int ans = -1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = arr[0];
    int end = arr[size - 1];
    int ans = -1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}



int main()
{
    int size = 8;
    int arr[size] = {2, 4, 6, 8, 6, 3, 1, 5};
    int key = 9;

    cout << "First occ is at : " << firstOcc(arr, size, key) << endl;
    cout << "Last occ is at : " << lastOcc(arr, size, key) << endl;
}