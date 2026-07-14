#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll sum = 0;
        ll l, r;
        cin >> l >> r;
        for (int i = l; i <= r; ++i)
            sum += v[i];

        cout << sum << endl;
    }
    return 0;
}