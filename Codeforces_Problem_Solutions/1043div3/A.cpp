#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s, s1, ty;
        cin >> n >> s;
        cin >> m >> s1;
        cin >> ty;
        string beg = "", end = "";
        for (int i = 0; i < m; ++i)
        {
            if (ty[i] == 'V')
                beg += s1[i];
            else if (ty[i] == 'D')
                end += s1[i];
        }
        reverse(beg.begin(), beg.end());
        cout << beg + s + end << endl;
    }
}