#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> divisors;
    for (int j = 1; j <= 9; ++j)
    {
        if (N % j == 0)
        {
            divisors.push_back(j);
        }
    }
    string res = "";
    for (int i = 0; i <= N; ++i)
    {
        char ch = '-';
        for (int j : divisors)
        {
            int k = N / j;
            if (i % k == 0)
            {
                ch = j + '0';
                break;
            }
        }
        res += ch;
    }
    cout << res << endl;
}
