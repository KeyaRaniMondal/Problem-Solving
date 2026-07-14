#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    int sum=0,max_sum=INT_MIN;
    for(int i=0;i<n;++i)
    {
        sum+=v[i];
        if(sum<0)
        sum=0;
        max_sum=max(sum,max_sum);
    }
    cout<<max_sum<<endl;
}

