// Enter the limit: 10
//   1
//   1       1
//   1       1       2
//   1       1       2       3
//   1       1       2       3       5
//   1       1       2       3       5       8
//   1       1       2       3       5       8       13
//   1       1       2       3       5       8       13      21
//   1       1       2       3       5       8       13      21      34
//   1       1       2       3       5       8       13      21      34      55

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int f1=0,f2=1;
         cout<<f2<<"\t";
        for(int j=1;j<i;++j)
        {
            int fibo=f1+f2;
            f1=f2;
            f2=fibo;
            cout<<fibo<<"\t";
        }
        cout<<endl;
    }
}