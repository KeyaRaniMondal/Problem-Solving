#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        int a[n], b[n];
        for (auto &ain : a)
            cin >> ain;
        for (auto &bin : b)
            cin >> bin;
        while (1)
        {
            int inc = 0, dec = 0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] > b[i])
                    dec = 1;
                else if (a[i] > b[i])
                    inc = 1;
            }
            res++;
            if (inc)
            {
                for (int i = 0; i < n; ++i)
                {
                    if (a[i] < b[i])
                    {
                        a[i]++;
                        break;
                    }
                }
            }
            if (dec)
            {
                for (int i = 0; i < n; ++i)
                {
                    if (a[i] > b[i])
                    {
                        a[i]--;
                        break;
                    }
                }
            }
            if (dec == 0)
                break;
        }
        cout << res << endl;
    }
}