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
        ll n, sum = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll x = sum % n;
        cout << x * (n - x) << endl;
    }
    return 0;
}