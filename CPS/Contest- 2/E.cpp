#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, area = 0;
    cin >> n;
    bool grid[101][101] = {};
    for (int i = 0; i < n; ++i)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for (int x = a; x < b; ++x)
        {
            for (int y = c; y < d; ++y)
            {
                grid[x][y] = true;
            }
        }
    }

    for (int x = 0; x < 101; ++x)
    {
        for (int y = 0; y < 101; ++y)
        {
            if (grid[x][y])
                area++;
        }
    }

    cout << area << endl;
}
