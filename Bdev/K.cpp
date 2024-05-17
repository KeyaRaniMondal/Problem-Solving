#include <bits/stdc++.h>
using namespace std;
#define fio                         \
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
ll n,block=0,st_hight=0;
cin>>n;
for(int i=0;i<n;++i)
{
    ll b;
    cin>>b;
    st_hight+=b;
    block+=i;
}

if(block<=st_hight)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
  }
  return 0;
}