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
        for (int i = n; i >= 1; --i)
        {
            
        int n1 = 2*n;
            for (int j = 1; j <= i; j++)
            {
                
                if (j <= n1 / 2)
                    cout << "(";
                else
                    cout << ")";
                    n1--;
            }
        }
        cout << endl;
    }
}