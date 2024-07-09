#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
const ll MOD = 1e9 + 7;

ll multiply(vector<int> &v)
{
    ll mult = 1;
    for (int num : v)
    {
        mult = (mult * (num % MOD)) % MOD;
    }
    return mult;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        ll res = multiply(v);
        cout << res << endl;
    }
    return 0;
}