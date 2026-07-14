#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year, model;
    cin >> year;
    model = year % 100;
    if(model<10)
    cout << "K0"<<model;
    else
    cout << "K" << model;

}