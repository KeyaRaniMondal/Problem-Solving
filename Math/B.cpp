#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, a1, b1, a2, b2, c1, c2, d1, d2;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;
        if (a1 == c1)
            a = abs(a2 - c2);
        else
            a = abs(a1 - c1);
        cout << a * a << endl;
    }
}
