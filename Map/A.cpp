#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int q;
        cin >> q;
        string x;
        int y;
        if (q == 1)
        {
            cin >> x >> y;
            mp[x] += y;
        }
        if (q == 2)
        {
            cin >> x;
            mp.erase(x);
        }
        if (q == 3)
        {
            cin >> x;
            cout << mp[x] << endl;
        }
    }
}