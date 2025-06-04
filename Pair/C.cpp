#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<pair<string, string>> st;
    while (t--)
    {
        string s, c;
        cin >> s >> c;
        st.insert({s, c});
    }
    cout << st.size() << endl;
}