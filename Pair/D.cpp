#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<pair<pair<int, int>, int>> st;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        st.insert({{a, b}, c});
    }
    for (auto &p : st)
        if (p.first.first == 0)
            cout << p.first.second << " " << p.first.first << " " << p.second << endl;
        else
            cout << p.first.first << " " << p.first.second << " " << p.second << endl;
}