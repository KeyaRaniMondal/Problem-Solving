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
   vector<queue<ll>>q(n);
    cin >> q;
    while (q--)
    {
        ll p, x, t;
        cin >> p >> t;
        if (p == 0)
        {
            cin >> x;
            q[t].push(x);
        }
        else if (p == 1)
        {
            for (int i = 0; i < q[t].size(); ++i)
            {
                cout << q[t][i];
                if (i != q[t].size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (p == 2)
        {
            while (!q[t].empty())
            {
                q[t].pop();
            }
        }
    }
    return 0;
}
