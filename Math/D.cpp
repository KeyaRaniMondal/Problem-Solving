#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a & 1 && b & 1)
            cout << "No" << endl;
        if (a % 2 == 0 && b % 2 == 0)
            cout << "Yes" << endl;
        if (b & 1)
            swap(a, b);
        if (a & 1)
        {
            if (b / 2 == a && a!=1)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}
