#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    priority_queue<long long> pq;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            long long x;
            cin >> x;
            pq.push(x);
        }
        else if (n == 2)
        {
            if (!pq.empty())
                pq.pop();
        }
        else
        {
            while (!pq.empty())
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
}