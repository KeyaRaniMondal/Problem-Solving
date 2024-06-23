
// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long

// int fibonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     ll t;
//     cin >> t;

//     for (int i = 1; i <= t; ++i)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll e = 0;
//         ll o = 0;
//         for (ll i = n - 1; i < m; ++i)
//         {
//             ll c = fibonacci(i);
//             // cout<<c<<" ";
//             if (c & 1)
//                 o++;
//             else
//                 e++;
//         }
//         cout << "Case " << i << ":" << endl;
//         cout << "Odd = " << o << endl
//              << "Even = " << e << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    ll t, o=0, e=0;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        ll n, m;
        cin >> n >> m;
        if (n > m)
            swap(m, n);
        ll num = m - n + 1;
        if ((n - 1) % 3 == 0)
        {
            e++;
            n++;
        }
        if ((m - 1) % 3 == 0)
        {
            e++;
            m--;
        }
        ll sum = m-n+1;
        e+= sum / 3;
        o= num - e;
        cout << "Case " << i << ":" << endl;
        cout << "Odd = " << o << endl
             << "Even = " << e << endl;
    }

    return 0;
}
