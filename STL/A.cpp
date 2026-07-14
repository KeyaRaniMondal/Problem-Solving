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
    vector<vector<ll>> v(n);
    cin >> q;
    while (q--)
    {
        ll p, x, t;
        cin >> p >> t;
        if (p == 0)
        {
            cin >> x;
            v[t].push_back(x);
        }
        else if (p == 1)
        {
            for (int i = 0; i < v[t].size(); ++i)
            {
                cout << v[t][i];
                if (i != v[t].size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (p == 2)
        {
            while (!v[t].empty())
            {
                v[t].pop_back();
            }
        }
    }
    return 0;
}
