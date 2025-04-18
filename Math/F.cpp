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
        int sec = 0, current = 1;
        for (char c : s)
        {
            int next = (c - '0');
            if (current == 0)
                current = 10;
            if (next == 0)
                next = 10;

            sec += abs(current - next) + 1;
            current = (c - '0');
        }
        cout << sec << endl;
    }
}
