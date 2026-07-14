#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long> v;
    int num;
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}
