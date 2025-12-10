// circular queue imlementaion using array best way   { always use :  front = (front + 1) % size; rather than front = front +1 ;}

#include <iostream>
using namespace std;
class queue
{
    int front, rear, size;
    int *arr;

public:
    queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    // if queue is empty or not
    bool IsEmpty()
    {
        return front == -1;
    }

    // queue is full or not
    bool IsFull()
    {
        return (rear+1)%size == front ;
    }

    // push element into queue ,end
    void push(int x)
    {
        // empety
        if (IsEmpty())
        {
            cout << "push element " << x << " into the queue\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }
        // full
        else if (IsFull())
        {
            cout << "queue is overflow." << endl;
            return;
        }
        // insert
        else
        {
            cout << "push element " << x << " into the queue\n";
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    // pop element , starting
    void pop()
    {
        // if empty
        if (IsEmpty())
        {
            cout << "queue is underflow\n";
            return;
        }
        // pop kar do
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                cout << "poped " << arr[front] << " from the queue.\n";
                front = (front+1)%size;
            }
        }
    }

    // which is the strating element
    void start()
    {
        // if empty
        if (IsEmpty())
        {
            cout << "queue is Empty\n";
            return;
        }
        // element present
        else
        {
            cout << "the starting element is: " << arr[front] << endl;
            return;
        }
    }
};

int main()
{
    queue q(5);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.push(9);
    q.push(9);
    q.push(9);
    q.push(9);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.start();
    cout << q.IsEmpty() << endl;
    cout << q.IsFull() << endl;
    return 0;
}