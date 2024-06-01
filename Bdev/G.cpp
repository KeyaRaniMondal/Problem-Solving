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
        ll n, H;
        cin >> n >> H;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<ll>());
        if (v[0] >= H)
        {
            cout << 1 << endl;
            continue;
        }
        ll count=H/(v[0]+v[1]);
        H-=(v[0]+v[1])*count;
        ll i=0;
while(H>0)
{
    H-=v[i&1];
    count++;
        ++i;
}
        cout << count<< endl;
    }
    return 0;
}