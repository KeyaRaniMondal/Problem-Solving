#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll gcdSum(ll n)
{
    ll n1 = n, sum = 0;

    while (n1 > 0)
    {
        sum += n1 % 10;
        n1 /= 10;
    }

    return gcd(n, sum);
}
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        if (gcdSum(n) > 1)
            cout << n << endl;
        else if (gcdSum(n + 1) > 1)
            cout << n + 1 << endl;
        else if (gcdSum(n + 2) > 1)
            cout << n + 2 << endl;
    }
    return 0;
}