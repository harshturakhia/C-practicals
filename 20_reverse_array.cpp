// 1st way
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(1);
    v.push_back(8);
    v.push_back(18);
    v.push_back(29);

    vector<int> ans = reverse(v);
    print(ans);
}

// 2nd way
#include <iostream>
using namespace std;

void reverse(int v[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n = 5;
    int v[n] = {1, 2, 3, 4, 5};

    reverse(v, n);
}

// 3rd way with editing
void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    int start = m + 1;
    int end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
