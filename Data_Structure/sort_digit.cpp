#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin >> d;
    int x = d, count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    int val = count;
    int arr[val];
    while (d != 0)
    {
        arr[--val] = d % 10;
        d /= 10;
    }
    for (int i = 0; i < count; ++i)
        cout << arr[i] << " ";
    // sort(arr,arr+count);
    cout << endl;
    for (int i = 0; i < count - 1; ++i)
    {
        for (int j = 0; j < count - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int i = 0; i < count; ++i)
        cout << arr[i] << " ";
}