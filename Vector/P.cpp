#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, serja = 0, dima = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &num : v)
        cin >> num;
    int left = 0, right = n - 1;
    bool turn = true;
    while (left <= right)
    {
        int pick;
        if (v[left] > v[right])
        {
            pick = v[left];
            left++;
        }
        else
        {
            pick = v[right];
            right--;
        }
        if (turn)
            serja += pick;
        else
            dima += pick;
        turn = !turn;
    }

    cout << serja << " " << dima << endl;
}