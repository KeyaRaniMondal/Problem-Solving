#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        vector<long long> a(n), b(n);
        for (auto &ain : a)
            cin >> ain;
        for (auto &bin : b)
            cin >> bin;
        if (a[n - 1] != b[n - 1])
            flag = 0;
        else
        {
            for (int i = n - 2; i >= 0 && flag; --i)
            {
                long long val1 = a[i];
                long long val2 = a[i] ^ a[i + 1];
                long long val3 = a[i] ^ b[i + 1];
                long long ck = b[i] == val1 || b[i] == val2 || b[i] == val3;
                if (!ck)
                    flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}