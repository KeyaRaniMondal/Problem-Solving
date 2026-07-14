// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long
// vector<int> biny;
// int binary_search(int q)
// {
//     int left = 0, right = biny.size() - 1;
//     int pos = -1;
//     while (left <= right)
//     {
//         ll mid = (left + right) / 2;
//         if (biny[mid] == q)
//         {
//             pos = mid;
//             right = mid - 1;
//         }
//         if (biny[mid] < q)
//             left = mid + 1;
//         else
//             right = mid - 1;
//     }
//     return pos;
// }
// int main()
// {
//     fio;
//     int n, qe;
//     cin >> n >> qe;
//     biny.resize(n);
//     vector<ll> biny(n);
//     for (ll i = 0; i < n; ++i)
//         cin >> biny[i];
//     for (int i = 0; i < qe; ++i)
//     {
//         int q;
//         cin >> q;
//         cout << binary_search(q) << endl;
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
    int n,q;
    cin>>n>>q;
    vector<int>b(n);
    for(int i=0;i<n;++i)
    cin>>b[i];
    while(q--)
    {
        int qe;
        cin>>qe;
        int l=0;
        int r=n-1;
        int flag=0;
        int mid;
        while(l<=r)
        {
            mid=l+(l-r)/2;
            if(b[mid]==qe)
            {
                if(mid-1>=0 && b[mid]==qe)
                r=mid-1;
            else{
                cout<<mid<<endl;
                flag=1;
                break;
            }
            }
            else if(b[mid]<qe)
            l=mid+1;
            else
            r=mid-1;
        }
        if(!flag && b[mid]==qe)
        cout<<mid<<endl;
        else if(!flag)
        cout<<-1<<endl;
    }
}