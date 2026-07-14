#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (auto &strA : a)
        strA = tolower(strA);
    for (auto &strB : b)
        strB = tolower(strB);
    if (a == b)
        cout << 0 << endl;
    else if (a > b)
        cout << 1 << endl;
    else
        cout << "-1" << endl;
}