#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n, q;
    cin >> n;
    vector<stack<ll>> st(n);
    cin >> q;
    while (q--)
    {
        ll p, x, t;
        cin >> p >> t;
        if (p == 0)
        {
            cin >> x;
            st[t].push(x);
        }
        else if (p == 1)
        {
            if (!st[t].empty())
            {
                cout << st[t].top() << endl;
            }
        }
        else if (p == 2)
        {
            if(!st[t].empty())
            {
                st[t].pop();
            }
        }
    }
    return 0;
}