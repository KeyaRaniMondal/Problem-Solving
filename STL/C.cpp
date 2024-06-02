// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long
// int main()
// {
//     fio;
//     ll n, q;
//     cin >> n >> q;
//     queue<pair<ll, ll>> qu;
//     while (q--)
//     {
//         ll q1, t, x;
//         cin >> q1 >> t;
//         bool flag = 0;
//         if (q1 == 0)
//         {
//             cin >> x;
//             qu.push(make_pair(t, x));
//         }
//         else if (q1 == 1)
//         {
//             while (!qu.empty())
//             {
//                 pair<ll, ll> f = qu.front();
//                 if (t == f.first)
//                     cout << f.second << endl;
//             }
//             qu.pop();
//         }
//         else if (q1 == 2)
//         {
//             while (!qu.empty())
//             {
//                 qu.pop();
//             }
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long

// int main()
// {
//     fio;
//     ll n, q;
//     cin >> n >> q;
//     vector<tuple<ll, ll, ll>> tp;
//     while(q--)
//     {
//         ll q1, t, x = -1;
//         cin >> q1 >> t;
//         if (q1 == 0)
//             cin >> x;
//         tp.emplace_back(q1, t, x);
//     }
//     vector<queue<ll>> qu(n);
//     for (auto [q1, t, x] : tp)
//     {
//         if (q1 == 0)
//             qu[t].push(x);
//         else if (q1 == 1)
//         {
//             if (!qu.empty())
//                 cout << qu[t].front() << endl;
//         }
//         else if (q1 == 2)
//         {
//             if (!qu.empty())
//                 qu[t].pop();
//         }
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
    fio;
    ll n, q;
    cin >> n;
    vector<queue<ll>> v(n);
    vector<queue<ll>> qu(n);
    cin >> q;
    while (q--)
    {
        ll p, x, t;
        cin >> p >> t;
        if (p == 0)
        {
            cin >> x;
            qu[t].push(x);
        }
        else if (p == 1)
        {
            if (!qu[t].empty())
            {
                cout << qu[t].front() << endl;
                qu[t].pop();
            }
        }
        else if (p == 2)
        {
            while (!qu[t].empty())
            {
                qu[t].pop();
            }
        }
    }
    return 0;
}