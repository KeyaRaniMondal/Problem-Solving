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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (s[i - 1] == 'B')
                    s[i] = 'R';
                if (s[i - 1] == 'R')
                    s[i] = 'B';
            }
        }
        for (int i = n - 2; i >= 0; --i)
        {
            if (s[i] == '?')
            {
                if (s[i + 1] == 'B')
                    s[i] = 'R';
                if (s[i + 1] == 'R')
                    s[i] = 'B';
            }
        }
        if (s[0] == '?')
        {
            for (int i = 0; i < n; ++i)
            {
                if (i % 2 == 0)
                    cout << "B";
                else
                    cout << "R";
            }
            continue;
        }
        cout << s << endl;
    }
    return 0;
}