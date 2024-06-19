#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
#define mod 1000000007

ll power(ll b, ll p)
{
    ll pow = 1;
    while (p)
    {
        if (p & 1)
        {
            pow = (pow * b) % mod;
            p--;
        }
        else
        {
            b = (b * b) % mod;
            p /= 2;
        }
    }
    return pow % mod;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
    return 0;
}