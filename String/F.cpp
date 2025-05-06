#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (auto &str : s)
        {
            str = tolower(str);
            st.insert(str);
        }
        if (st == set<char>({'m', 'e', 'o', 'w'}))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}