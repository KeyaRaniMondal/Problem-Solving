//Armstrong number is a number that is equal to the sum of cubes of its digits

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit,cube_of_d=0;
    cin>>digit;
    int d=digit;
    while(d!=0)
    {
        int rem=d%10;
        d/=10;
        cube_of_d+=rem*rem*rem;
    }
    if(digit==cube_of_d)
    cout<<"Armstrong"<<endl;
    else
    cout<<"not Armstrong"<<endl;
}