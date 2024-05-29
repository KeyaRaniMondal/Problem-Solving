#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>q;
for(int i=1;i<=5;++i)
{
    q.push(i);
}
while(!q.empty())
{
    int x=q.front();
    cout<<x<<endl;
    q.pop();
}
}