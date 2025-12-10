// revesre the element of queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    // how to creat a queue
    queue<int> q;
    q.push(2);
    q.push(6);
    q.push(0);
    q.push(99);
    q.push(55);

    // creat a stack for store queue element 
    stack<int> s;

    // push element in stack untill queue is empty
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    // push element into queue untill stack is empty
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    // print all element 
    int n = q.size();
    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}