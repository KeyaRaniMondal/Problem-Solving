//      A
//     ABA
//    ABCBA  2*i-1
//   ABCDCBA
//  ABCDEDCBA

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;++i)
    {
        for(int j=n;j>i;--j)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;++k)
        {
            cout<<ch++;
        }
        ch--;
        for(int m=1;m<i;++m)
        {
            cout<<--ch;        // By doing  ch-- we get B in place of A
        }
        cout<<endl;
        ch='A';
    }
}