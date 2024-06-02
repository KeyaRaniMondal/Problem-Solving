#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
bool cmp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second > p2.second;
}
int main()
{
    fio;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for (ll i = 0; i < n; ++i)
    {
        cout << v[i].first<<" " << v[i].second<<endl;
    }
    return 0;
}
