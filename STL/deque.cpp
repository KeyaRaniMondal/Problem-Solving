#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(5);
    dq.push_back(15);
    dq.push_front(25);
    dq.push_front(50);
    dq.push_back(10);
    cout << dq.front() << endl;
    dq.pop_front();
    cout << dq.back() << endl;
    dq.pop_back();
}