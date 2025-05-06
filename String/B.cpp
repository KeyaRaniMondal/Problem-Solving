#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    while (true)
    {
        bool replaced = false;
        for (int i = 0; i < s.size()-1; ++i)
        {
            if (s.substr(i, 2) == "na")
            {
                s.insert(s.begin() + i + 1, 'y');
                replaced = true;
                break;
            }
        }
        if (!replaced)
            break;
    }
    cout << s << endl;
}

