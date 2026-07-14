#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

ll sum_Power(ll n)
{
    ll sum = n * (n + 1) / 2;
    ll powSum = 0;
    ll power = 1;
    while (power <= n)
    {
        powSum += power;
        power *= 2;
    }
    return sum - 2 * powSum;
}

int main()
{
    fio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << sum_Power(n) << endl;
    }
    return 0;
}
