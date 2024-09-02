#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
const ll MOD = 1000000007;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, multiply = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            multiply = ((v[i] % MOD) * (multiply % MOD)) % MOD;
        }
        cout << multiply << endl;
    }
    return 0;
}


