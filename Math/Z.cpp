#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ck = ((b / a) - 1) + ((c / a) - 1);
        if(a)
        if ((b%a==0 && c%a==0)||ck <= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}