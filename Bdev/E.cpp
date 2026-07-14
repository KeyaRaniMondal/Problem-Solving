#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i <= s.size(); ++i)
        {
            if (i & 1)
            {
                if (s[i] == 'z')
                    s[i] = 'y';
                else
                    s[i] = 'z';
            }
            else
            {

                if (s[i] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
        }
        cout << s << endl;
    }
    return 0;
}
