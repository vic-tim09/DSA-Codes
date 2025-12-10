// print all element which present in queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(8);
    q.push(82);
    q.push(89);
    q.push(0);

    // value print kro
    int n = q.size();

    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
