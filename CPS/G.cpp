#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, money = 0;
        cin >> n >> a >> b;

        if (b < 2 * a)
        {
            money += (n / 2) * b;
            money += (n % 2) * a;
        }
        else
        {
            money += n * a;
        }

        cout << money << endl;
    }
}
