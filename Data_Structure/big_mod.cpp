#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

ll power(ll b, ll p, ll mod) //
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        ll x = power(b, p / 2, mod);
        // cout<<"1= "<<x<<endl;
        return (x * x) % mod;
    }
    else
    {
        ll y = power(b, p - 1, mod);
        ll x = ((b % mod) * y) % mod;
        // cout<<"2= "<<x<<endl;
        return x;
    }
}
int main()
{
    fio;
    ll b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << power(b, p, m) << endl;
    }
}

// 3,15,5
//        15
//      /     \
//     14      1
//    /  \
//    7   7
//   / \
//   6  1
//  / \
//  3  3
//  / \
//  2  1
//  / \
//  1  1->2
//  /
//  0->1

