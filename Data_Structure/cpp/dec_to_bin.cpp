//convert any decimal number into binary number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>v;
    while(n!=0)
    {
        int bin=n%2;
        v.push_back(bin);
        n/=2;
    }
    for(int i=v.size()-1;i>=0;--i)
    {
        cout<<v[i];
    }
}