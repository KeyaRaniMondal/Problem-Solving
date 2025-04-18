#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    int total = (mn + mx) * (mx - mn + 1) / 2;
    cout << total - sum << endl;
}