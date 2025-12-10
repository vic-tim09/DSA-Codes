// queue imlementaion using linked list

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class queue
{
    Node *front;
    Node *rear;

public:
    queue()
    {
        front = rear = NULL;
    }

    // check IsEmpty
    bool IsEmpty()
    {
        return front == NULL;
    }
    // push operation
    void push(int x)
    {
        // if Empty
        if (IsEmpty())
        {
            cout << "pushed element " << x << " into the queue.\n";
            front = rear = new Node(x);
            return;
        }
        // is no empty
        else
        {
            cout << "pushed element " << x << " into the queue.\n";
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    // pop operation
    void pop()
    {
        // is empty
        if (IsEmpty())
        {
            cout << "queue under flow \n";
            return;
        }
        // not empty
        else
        {
            cout << "popedd element " << front->data << " from the queue.\n";
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    // stating me kon sa element hai
    void start()
    {
        // if is empty
        if (IsEmpty())
        {
            cout << "queue is empty\n";
            return;
        }
        else
        {
            cout << "starting element is : " << front->data << endl;
        }
    }
};

int main()
{
    queue q;
    q.push(2);
    q.push(8);
    q.push(25);
    q.pop();
    q.pop();
    q.pop();
    q.push(266);
    q.start();
    cout << q.IsEmpty() << endl;
    return 0;
}