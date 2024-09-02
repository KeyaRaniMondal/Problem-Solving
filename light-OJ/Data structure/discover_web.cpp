#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        stack<string>BACK,FORWARD;
        string str,url;
        string URL="http://www.lightoj.com/";
        cout<<"Case "<<i<<":";
        FORWARD.push(URL);
while(1)
{
    cin>>str;
    string temp;
    if(str=="VISIT")
    {
        cin>>url;
        if(FORWARD.empty())
        cout<<"Ignored"<<endl;
else
{
    temp=FORWARD.top();
    FORWARD.pop();
    BACK.push(temp);
    if(!FORWARD.empty())
    {
        FORWARD.pop();
    }
    FORWARD.push(url);
    cout<<FORWARD.top()<<endl;
}
    }
    else if(str=="BACK")
    {
        if(!BACK.empty())
{        temp=BACK.top();
        BACK.pop();
        FORWARD.push(temp);
        cout<<FORWARD.top()<<endl;}
        else
        cout<<"Ignored"<<endl;
    }
        else if(str=="FORWARD")
        {
        if(!FORWARD.empty())
{        temp=FORWARD.top();
        FORWARD.pop();
        BACK.push(temp);
        cout<<FORWARD.top()<<endl;}
        else if(FORWARD.size()<2)
        cout<<"Ignored"<<endl;
        }
        else if(str=="QUIT")
        break;
    }
}
}