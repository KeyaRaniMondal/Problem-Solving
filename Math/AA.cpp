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
        int minPrice = 0;
        if (b < 2 * a)
            minPrice = (n / 2) * b + (n % 2) * a;
        else
            minPrice = n * a;

        cout << minPrice << endl;
    }
}
