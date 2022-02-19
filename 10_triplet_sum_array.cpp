#include "bits/stdc++.h"
using namespace std;

// vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
// {
//     // Write your code here.
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 cout << i << "  " << j << "  " << k;
//             }
//         }
//     }
//     return ans;
// }

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                cout << i << "  " << j << "  " << k;
            }
        }
    }
    cout << endl;
}