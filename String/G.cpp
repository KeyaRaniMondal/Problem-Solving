#include <bits/stdc++.h>
using namespace std;

int countVowels(string s)
{
    int countV = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            countV++;
    }
    return countV;
}
int main()
{
    vector<string> s(3);
    for (int i = 0; i < 3; ++i)
        getline(cin, s[i]);
    int v1 = countVowels(s[0]);
    int v2 = countVowels(s[1]);
    int v3 = countVowels(s[2]);
    if (v1 == 5 && v2 == 7 && v3 == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}