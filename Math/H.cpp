#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos = INT_MAX, neg = INT_MAX, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            flag = 1;
        }
        else
        {
            if (arr[i] > 0 && arr[i] != 0)
                pos = min(pos, arr[i]);
            else if (arr[i] < 0 && arr[i] != 0)
                neg = min(neg, abs(arr[i]));
        }
    }
    if (flag == 1)
        cout << 0 << endl;
    else if (pos < abs(neg))
        cout << pos << endl;
    else
        cout << abs(neg) << endl;
}
