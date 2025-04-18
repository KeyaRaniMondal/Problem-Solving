// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n, res = -1;
//     cin >> n;
//     for (int i = 1; i <= n; ++i)
//     {
//         if (pow(i, i) == n)
//         {
//             res = i;
//             break;
//         }
//     }
//     cout << res << endl;
// }

#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b)
{
    long long res = 1;
    for (int i = 0; i < b; ++i)
    {
        if (res > 1e18 / a)
            return 1e18;
        res *= a;
    }
    return res;
}

int main()
{
    long long n, res = -1;
    cin >> n;
    for (long long i = 1; i <= n; ++i)
    {
        if (power(i, i) == n)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;
}
