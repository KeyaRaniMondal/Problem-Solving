#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        long long x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        int mn=min(p1,p2);
        p1-=mn;
        p2-=mn;
        if(p1>6)
        cout<<">"<<endl;
        else if(p2>6)
        cout<<"<"<<endl;
        else
        {
            for (int i = 1; i <= p1; ++i)
            {
                x1 *= 10;
            }
            for (int i = 1; i <= p2; ++i)
            {
                x2 *= 10;
            }
        if (x1 < x2)
            cout << "<" << endl;
        if (x1 > x2)
            cout << ">" << endl;
        if (x1 == x2)
            cout << "=" << endl;
        }
    }
    return 0;
}