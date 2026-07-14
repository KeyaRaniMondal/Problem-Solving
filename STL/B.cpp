#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    list<ll> l;
    auto cursor = l.end();
    ll t;
    cin >> t;
    while (t--)
    {
        ll c, d, x;
        cin >> c;
        if (c == 0)
        {
            cin >> x;
            cursor = l.insert(cursor, x);
        }
        else if (c == 1)
        {
            cin >> d;
            if (d > 0)
            {
                while (d-- && cursor != l.end())
                    cursor++;
            }
            else if (d < 0)
            {
                while (d++ && cursor != l.begin())
                    cursor--;
            }
        }
        else if (c == 2)
        {
            cursor != l.end();
            cursor = l.erase(cursor);
        }
    }
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << endl;
    return 0;
}
