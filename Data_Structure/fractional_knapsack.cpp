#include <bits/stdc++.h>
using namespace std;
bool compareValue(pair<int, int> p1, pair<int, int> p2)
{
    double v1 = (double)p1.first / p1.second;
    double v2 = (double)p2.first / p2.second;

    return v1 > v2;
}
int main()
{
    int weight, n;
    cin >> weight >> n;
    vector<pair<int, int>> value_weight(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> value_weight[i].first >> value_weight[i].second;
    }
    sort(value_weight.begin(), value_weight.end(), compareValue);

    for (int i = 0; i < n; ++i)
    {
        cout<<"sorted in descending order :"<<value_weight[i].first <<" "<< value_weight[i].second<<endl;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (weight >= value_weight[i].second)
        {
            ans += value_weight[i].first;
            weight -= value_weight[i].second;
            continue;
        }
        double v_per_w = (double)value_weight[i].first / value_weight[i].second;
        ans += v_per_w * weight;
        weight = 0;
        break;
    }
    cout<<ans << endl;
}

