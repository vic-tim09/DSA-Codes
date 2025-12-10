// revesre k element of queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    // how to creat a queue
    queue<int> q;
    q.push(20);
    q.push(2);
    q.push(1);
    q.push(99);
    q.push(55);

    int n = q.size();

    // creat a stack for store queue element and queue empty
    stack<int> s;
    int k = 3;

    // push first k element in stack
    while (k--)
    {
        s.push(q.front());
        q.pop();
    }
    int t = q.size(); // remaining element

    // push element in queue from stack and stack is empty
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    // order set
    while (t--)
    {
        q.push(q.front());
        q.pop();
    }

    // print all element

    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
