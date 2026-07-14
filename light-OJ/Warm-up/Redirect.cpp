#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; ++j)
    {
        string s;
        cin >> s;
        cout << "Case " << j << ": ";
        if (s[4] == 's')
        {
            for (int i = 0; i < s.size(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            cout << "https";
            for (int i = 4; i < s.size(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}