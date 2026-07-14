#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int p1 = arr[0], strong = INT_MIN;

    for (int i = 1; i < n; ++i)
    {
        cin >> arr[i];
        strong = max(strong, arr[i]);
    }

    int x = 0;
    if (p1 <= strong)
        x = (strong - p1) + 1;

    cout << x << endl;
}
