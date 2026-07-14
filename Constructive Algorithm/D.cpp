#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int pos = 0, neg = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
            neg += arr[i];
        else
            pos += arr[i];
    }
    cout << pos - neg << endl;
}