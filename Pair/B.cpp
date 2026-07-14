#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool found = false;
        for (int rep = 0; rep < 100; ++rep)
        {
            for (char c : s)
            {
                if (c == 'N')
                    y++;
                else if (c == 'E')
                    x++;
                else if (c == 'S')
                    y--;
                else if (c == 'W')
                    x--;

                if (x == a && y == b)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
