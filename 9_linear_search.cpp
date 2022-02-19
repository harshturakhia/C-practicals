#include <iostream>
using namespace std;

bool linearSearch(int num[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (num[i] == key)
            return 1;
    }
}

int main()
{
    int size;

    cout << "Size : ";
    cin >> size;

    int num[size];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int key;
    cout << "Key : ";
    cin >> key;

    bool found = linearSearch(num, size, key);
    if (found)
        cout << "Key is present...";
    else
        cout << "Key not present...";
}
