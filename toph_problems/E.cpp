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
        ll a, b, c, ac = 0, bc = 0;
        cin >> a >> b >> c;
        string s, s1;
        cin >> s >> s1;
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());
        if (s.size() == 1 && s1.size() == 1)
        {
            if (s != s1)
                cout << "impossible" << endl;
            else if (s == s1)
                cout << 0 << endl;
        }
        else
            cout << abs(a - b) << endl;
    }
    return 0;
}
