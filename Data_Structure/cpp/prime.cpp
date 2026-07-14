#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "not prime" << endl;
        return 0;
    }
    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << "not prime" << endl;
            break;
        }
    }
    if (flag == 0)
        cout << "prime" << endl;
}