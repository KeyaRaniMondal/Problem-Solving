#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    char ch;
    cin >> h1 >> ch >> m1;
    cin >> h2 >> ch >> m2;
    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;
    int time = (start + end) / 2;
    int hour = time / 60;
    int min = time % 60;
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << endl;

}
