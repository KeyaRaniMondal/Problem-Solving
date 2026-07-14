//      1
//     121
//    12321
//   1234321
//  123454321 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num=1;
    cin>>n;
for(int i=1;i<=n;++i)
{
    for(int j=n;j>i;--j)
    {
        cout<<" ";
    }
    for(int k=1;k<=i;++k)
    {
        cout<<num++;
    }
    num--;
    for(int m=1;m<i;++m)
    {
        cout<<--num;
    }
    cout<<endl;
}
}