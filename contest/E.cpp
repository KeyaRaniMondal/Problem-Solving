#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        ll min = INT_MAX;
        for (ll i = 1; i < n; ++i)
        {
            ll d = v[i] - v[i - 1];
            if (d < min)
                min = d;
        }
        cout << min << endl;
    }
    return 0;
}
