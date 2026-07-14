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
        ll n;
        cin >> n;
        if ((n & (n - 1)) != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
