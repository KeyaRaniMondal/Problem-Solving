#include<iostream>
#include<stack>
using namespace std;

int main()
{
  stack<int>s;
  int n;
  cin>>n;
  for(int i=0;i<n;++i)
  {
  s.push(i);
  }
  while(!s.empty())
  {
    cout<<s.top()<<" ";//topmost element
    s.pop();//delets most recent entered element
  }
}

