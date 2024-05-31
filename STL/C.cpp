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
    cin >> n >> q;
    queue<pair<ll, ll>> qu;
    while (q--)
    {
        ll q1, t, x;
        cin >> q1 >> t;
        if (q1 == 0)
        {
            cin >> x;
            qu.push(make_pair(t, x));
        }
        else if (q1 == 1)
        {
            while (!qu.empty())
            {
                pair<ll, ll> f = qu.front();
                if (t == f.first)
                    cout << f.second << endl;
            }
            qu.pop();
        }
        else if (q1 == 2)
        {
            while (!qu.empty())
            {
                qu.pop();
            }
        }
    }
    return 0;
}


