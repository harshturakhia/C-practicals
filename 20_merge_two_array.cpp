#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {

        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {

        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int n = 5;
    int arr1[n] = {1, 3, 5, 7, 9};

    int m = 5;
    int arr2[m] = {2, 4, 6, 8, 10};

    int q = m + n;
    int arr3[q];

    merge(arr1, n, arr2, m, arr3);

    for (int i = 0; i < q; i++)
    {
        cout << arr3[i] << " ";
    }
}