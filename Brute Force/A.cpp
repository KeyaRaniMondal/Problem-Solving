#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> v[i];

        bool isBeautiful = false;
        for (int i = 1; i <= n; ++i)
        {
            if (v[i] <= i)
                isBeautiful = true;
        }
        if (isBeautiful)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}