#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (s == v[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}