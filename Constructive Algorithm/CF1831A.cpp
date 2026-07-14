#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = n + 1;
        int permutation[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> permutation[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cout << sum - permutation[i] << " ";
        }
        cout << endl;
    }
}