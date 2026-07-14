#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        for (int i = n - k; i <= n; ++i)
        {
            cout << i << " ";
            count++;
        }
        if (count != n)
        {
            for (int i = (n - k - 1); i >= 1; --i)
                cout << i << " ";
        }
        cout << endl;
    }
}