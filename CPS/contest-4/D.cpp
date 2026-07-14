#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i - 1] <= s[i])
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
