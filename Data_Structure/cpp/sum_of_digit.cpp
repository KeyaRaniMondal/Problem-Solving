#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sum=0;
    cin>>d;
    while (d!=0)
    {
        int rem=d%10;
        d/=10;
        sum+=rem;
    }
    cout<<sum<<endl;
    
}