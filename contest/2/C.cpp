#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        int i = 0;
        int n = s.size();

        while (i < n)
        {
            int cnt0 = 0, cnt1 = 0;

            if (s[i] == '0')
            {
                while (i < n && s[i] == '0')
                {
                    cnt0++;
                    i++;
                }
                while (i < n && s[i] == '1')
                {
                    cnt1++;
                    i++;
                }
            }
            else // s[i] == '1'
            {
                while (i < n && s[i] == '1')
                {
                    cnt1++;
                    i++;
                }
                while (i < n && s[i] == '0')
                {
                    cnt0++;
                    i++;
                }
            }

            res += min(cnt0, cnt1);
        }

        cout << res << endl;
    }
    return 0;
}
