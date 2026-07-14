#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int cut_rod(int price[], int n)
{
    int val[n + 1];
    val[0] = 0;//0 length er price 0
    for (int i = 1; i <= n; ++i)//index defines length of rod
    {
        int max_val = INT_MIN;
        for (int j = 0; j < i; ++j)
        {
            max_val = max(max_val, price[j] + val[i - j - 1]);

        }
        val[i] = max_val;

    }
    return val[n];
}

int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> price[i];
    }
    cout << " maximum obtainable value : " << cut_rod(price, n);
    return 0;
}







