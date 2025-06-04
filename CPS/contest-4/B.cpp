#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >>n>> x;
        int income = pow(2, x);
        float saved = (float)income;
        for (int i = n; i > 0; --i)
        {
            saved -= saved * 0.5;
        }
        cout << saved << endl;
    }
}