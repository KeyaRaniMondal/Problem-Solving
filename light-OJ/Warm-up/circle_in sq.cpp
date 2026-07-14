#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double pi = 2.0 * acos(0.0);
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        double r;
        cin >> r;
        double d = 2 * r;
        double square = d * d;
        double circle = pi * r * r;
        double blue = square - circle;
        cout << "Case " << i << ": " << fixed << setprecision(2) << blue << endl;
    }
    return 0;
}
