#include<bits/stdc++.h>
using namespace std;
int palindrome(int num)
{
    int rev=0;
while (num!=0)
{
    int rem=num%10;
rev=rev*10+rem;
   num/=10;
}
return rev;
}

int main()
{
    int n;
    cin>>n;
    int rev=palindrome(n);
    //cout<<rev;
    if(n==rev)
    cout<<"palindrome"<<endl;
    else
    cout<<"Not palindrome"<<endl;
}