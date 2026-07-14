#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    set<int>s;
    set<int>::iterator it;
    while(q--)
    {
        int y;
        long x;
        cin>>y>>x;
        if(y==1)
        s.insert(x);
        else if(y==2)
        s.erase(x);
        else if(y==3)
        {
            it=s.find(x);
            if(it!=s.end())
            cout<<"Yes"<<endl;
            else
             cout<<"No"<<endl;
        }
    }
}
