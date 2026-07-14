#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos = 0, neg = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
            neg += arr[i];
        else
            pos += arr[i];
    }
    if (neg == 0)
        cout << pos << endl;
    else
        cout << pos - neg << endl;
}