#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h, sum = 0, count = 0;
        cin >> n >> h;
        vector<ll> v;
        for (int i = 1; i <= n; ++i)
        {
            ll w;
            cin >> w;
            v.push_back(w);
        }
        sort(v.begin(), v.end(), greater<ll>());
        if (h <= v[0])
            cout << 1 << endl;
        else
        {
            for (int i = 0; i < n; ++i)
            {
                sum += v[i];
                count++;
                if (sum == h)
                    break;
            }
            cout << count << endl;
        }
    }
    return 0;
}