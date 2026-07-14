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
        int n = 0, f = 0, t1 = 0;
        vector<char> contest;
        for (auto &ch : s)
        {
            if (ch == 'N')
                n++;
            else if (ch == 'F')
                f++;
            else if (ch == 'T')
                t1++;
            else
                contest.push_back(ch);
        }
        for (int i = 0; i < t1; ++i)
            cout << 'T';
        for (int i = 0; i < f; ++i)
            cout << 'F';
        for (int i = 0; i < n; ++i)
            cout << 'N';
        for (auto &c : contest)
            cout << c;
        cout << endl;
    }
}