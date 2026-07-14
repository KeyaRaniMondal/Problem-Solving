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
        ll n, sum = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }
        ll sq = sqrt(sum);
        if (sq * sq == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}