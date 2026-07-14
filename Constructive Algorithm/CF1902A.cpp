#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, zero = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                zero++;
                break;
            }
        }
        if (zero >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
