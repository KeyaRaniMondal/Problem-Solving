#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n, m;
        cin >> n >> m;
        deque<int> q;
        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < m; ++j)
        {
            string s;
            cin >> s;
            if (s == "pushLeft")
            {
                int l;
                cin >> l;
                if (q.size() != n)
                {
                    q.push_front(l);
                    cout << "Pushed in left: " << l << endl;
                }
                else
                    cout << "The queue is full" << endl;
            }
            else if (s == "popLeft")
            {
                if (!q.empty())
                {
                    int l = q.front();
                    q.pop_front();
                    cout << "Popped from left: " << l << endl;
                }
                else
                    cout << "The queue is empty" << endl;
            }
            else if (s == "pushRight")
            {
                int r;
                cin >> r;
                if (q.size() != n)
                {
                    q.push_back(r);
                    cout << "Pushed in right: " << r << endl;
                }
                else
                    cout << "The queue is full" << endl;
            }
            else if (s == "popRight")
            {
                if (!q.empty())
                {
                    int r = q.back();
                    q.pop_back();
                    cout << "Popped from right: " << r << endl;
                }
                else
                    cout << "The queue is empty" << endl;
            }
        }
    }
    return 0;
}