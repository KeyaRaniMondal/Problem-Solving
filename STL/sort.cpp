#include <bits/stdc++.h>
using namespace std;
struct data
{
    int h;
    int w;
    int income;
};

bool cmp(data a, data b)
{
    if (a.income == b.income)
    {
        if (a.h == b.h)
        {
            return a.w < b.w;
        }
    }
    if (a.h == b.h)
    {
        return a.w > b.w;
    }
    return a.h > b.h;
}
//sort(vector.begin(),vector.end(),greater<int>) function sorts like
bool cmp2(int a, int b)
{
    return a > b;
}

int main()
{
    /*vector<ll>v;

    for(int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < 5; i++)
        cout<<v[i]<<" ";*/

    data ara[100];

    for (int i = 0; i < 5; i++)
    {
        int height, weight;

        cin >> height >> weight;

        ara[i].h = height;
        ara[i].w = weight;
    }

    sort(ara, ara + 5, cmp);

    for (int i = 0; i < 5; i++)
    {
        cout << ara[i].h << "    " << ara[i].w << endl;
    }
}
