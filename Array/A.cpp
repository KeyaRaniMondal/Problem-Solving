#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] & 1)
                count++;
        }
        cout << count << endl;
    }
}
