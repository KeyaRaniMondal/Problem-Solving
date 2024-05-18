#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
    int t;
    cin >> t;
 
    while (t--) {
       ll n, h;
        cin >> n >> h;
 
        vector<ll>v(n); 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        sort(v.begin(), v.end(), greater<ll>()); 
if(v[0]<h)
swap(v[0],h);
ll count=(v[0]%h)-v[n-1];
if(count==0)
cout<<1<<endl;
else
cout<<count<<endl;
        
    }
    }
    return 0;
}