// QUEUE STL : standard template libary for queue
#include <iostream>
#include <queue>
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

    // delete
    q.pop();
    q.pop();

    // front element
    cout << q.front() << endl;

    // back element
    cout << q.back() << endl;

    // size
    cout << q.size() << endl;

    // empty hai ya nhi
    cout << q.empty() << endl;
}