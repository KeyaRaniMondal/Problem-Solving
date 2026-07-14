#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if ((arr[i] + h) >= x)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}