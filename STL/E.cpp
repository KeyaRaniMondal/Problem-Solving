#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll q, x;
    cin >> q;
    map<string, int> m;
    while (q--)
    {
        ll e, x;
        cin >> e;
        string key;
        cin >> key;
        if (e == 0)
        {
            cin >> x;
            m[key] = x;
        }
        else if (e == 1)
        {
            if (!m.empty())
                cout << m[key] << endl;
            else
                cout << 0 << endl;
        }
        else if (e == 2)
            m.erase(key);
    }
    return 0;
}
