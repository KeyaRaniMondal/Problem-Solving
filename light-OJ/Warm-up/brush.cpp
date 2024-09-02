#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;++i)
        {
            if(v[i]>0)
           sum+=v[i];
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
