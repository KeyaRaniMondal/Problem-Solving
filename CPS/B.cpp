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
        if ((a + b) == 2 || (a + b) == 3 || (a + b) == 5 || (a + b) == 7 || (a + b) == 11)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}