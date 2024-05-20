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
        s[0]='B';
        for (int i = 1; i < n; ++i)
        {
            if(i%2==0 && s[i]=='?'&&s[i-1]=='R')
            s[i]='R';
            if(i&1 && s[i]=='?'&&s[i-1]=='B')
            s[i]='B';
            else if (s[i] == '?')
            {
                if (s[i - 1] == 'B')
                    s[i] = 'R';
                if (s[i - 1] == 'R')
                    s[i] = 'B';
            }
        }
        cout << s << endl;
    }
    return 0;
}