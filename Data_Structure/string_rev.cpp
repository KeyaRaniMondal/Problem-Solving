#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, pos;
    cin >> s;
    string rev = s;

    // Collect positions of uppercase letters and convert them to lowercase
    for (int i = 0; i < s.size(); ++i)
    {
        if (isupper(rev[i]))
        {
            pos.push_back(rev[i]);
            rev[i] = tolower(rev[i]);
        }
    }

    // Reverse the string
    reverse(rev.begin(), rev.end());

    // Restore the uppercase letters in the reversed string
    for (char p : pos)
        rev[p] = toupper(rev[p]);
    cout << rev << endl;

    return 0;
}
