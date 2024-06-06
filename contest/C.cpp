#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll e = 0, o = 0;
    ll even = -1, odd = -1;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 0)
        {
            e++;
            even = i;
        }
        else
        {
            o++;
            odd = i;
        }
    }

    if (e == 1)
        cout << even + 1 << endl;
    else
        cout << odd + 1 << endl;
    return 0;
}
