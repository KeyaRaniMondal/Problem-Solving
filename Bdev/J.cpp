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
        ll a, b;
        cin >> a >> b;
        if (a == 1 && b == 1)
            cout << 0 << endl;
        else if ((a == 1 && b > 1) || (a > 1 && b == 1))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}