#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n;
    cin >> n;
    vector<vector<ll> >v;
    while (n--)
    {
       ll id,m;
       cin>>id>>m;
       for(int i=0;i<n;++i)
       v[id].push_back(m);
       for(int i=1;i<n-1;++i)
       {
        for(int j=0;j<n-i-1;++j)
        {
            if(v[j]>v[j+1])
            swap(v[j],v[j+1]);
        }
       }
              for(int i=0;i<n;++i)
       {
        for(int j=0;j<n;++j)
        cout<<v[i][j]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
