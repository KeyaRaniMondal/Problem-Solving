#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    ll n, a, b;
    cin >> n;
    if (n & 1)
        cout << n - 9 << " " << 9 << endl;
    else
        cout << n - 8 << " " << 8 << endl;
    return 0;
}