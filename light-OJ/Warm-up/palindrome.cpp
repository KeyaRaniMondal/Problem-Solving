#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        long long n,rem,rev=0;
        cin>>n;
        long long num=n;//125
        while(num!=0)
        {
            rem=num%10;//5,2,1
            rev=(rev*10)+rem;//5,52,521
            num/=10;//12,1,0
        }
        if(n==rev)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
             cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
