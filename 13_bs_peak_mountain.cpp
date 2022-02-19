#include "bits/stdc++.h"
using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{

    int s = arr[0];
    int e = arr[n - 1];

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int n = 4;
    int arr[4] = {3, 4, 5, 1};
    cout << peakIndexInMountainArray(arr, n);
}