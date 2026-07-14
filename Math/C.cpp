#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, product = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        arr[0] = arr[0] + 1;
        for (int i = 0; i < n; ++i)
        {
            product *= arr[i];
        }
        cout << product << endl;
    }
}
