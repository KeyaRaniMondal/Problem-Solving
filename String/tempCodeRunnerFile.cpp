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
        int zero = 0, one = 0;
        for (auto &str : s)
        {
            if (str == '0')
                zero++;
            else
                one++;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                if (one > 0)
                    one--;
                else
                    break;
            }
            else
            {
                if (zero > 0)
                    zero--;
                else
                    break;
                ;
            }
        }
        cout << max(zero, one) << endl;
    }
}