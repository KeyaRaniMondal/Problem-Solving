#include <bits/stdc++.h>
using namespace std;
// priority_queue<int,vector<int>,greater<int>>pq;
int main()
{
    //priority queue usually prints in descending order printing the max value first
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(15);
    /*to sort values in ascending order

    // priority_queue<int> pq;
    // pq.push(5 * (-1));
    // pq.push(1 * (-1));
    // pq.push(15 * (-1));
    // while (!pq.empty())
    // {
    //     int x = pq.top();
    //     cout << x * (-1) << endl;
    //     pq.pop();
    // }

    or,
    need to declare above main function
 //priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(1);
    pq.push(15);*/
    while (!pq.empty())
    {
        int x = pq.top();
        cout << x << endl;
        pq.pop();
    }
}