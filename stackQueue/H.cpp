#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
   int count=0;
    for(char ch:s)
    {
        if(ch>='a'&& ch<='z')
      st.push(ch);
    // count++;}
        else if(ch==')')
        st.pop();
    }
    if(st.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}