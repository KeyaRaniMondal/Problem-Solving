#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, t;
        cin >> n >> x >> t;
        if (t < x)
            cout << 0 << endl;
        else
        {
            if (t / x >= n)
                cout << (n * (n - 1)) / 2 << endl;
            else
            {
                ll mx = (0, n - (t / x));
                ll mn = (n - 1, ((t / x) - 1));
                ll mn1 = (n, (t / x));
                ll ans = mx * (t / x) + mn * mn1 / 2;
                cout << ans << endl;
            }
        }
    }
    return 0;
}