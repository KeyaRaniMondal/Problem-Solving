#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, x, y, flag = 0;
        cin >> n >> m >> k;
        cin >> x >> y;
        for (int i = 1; i <= k; ++i)
        {
            int fx, fy;
            cin >> fx >> fy;
            if (((x + y) % 2 )== ((fx + fy) % 2))
                flag = 1;
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}