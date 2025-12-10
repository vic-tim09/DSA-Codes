// Deque implementation by using array

#include <iostream>
using namespace std;
class dequeue
{
    int size, rear, front;
    int *arr;

public:
    dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Is empty
    bool IsEmpty()
    {
        return front == -1;
    }

    // full hai ya nhi
    bool IsFull()
    {
        return (rear + 1) % size == front;
    }

    // push front
    void push_front(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "pushhed " << x << " in front of deque.\n";
            return;
        }
        else if (IsFull())
        {
            cout << "array overflow \n";
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout << "pushhed " << x << " in front of deque.\n";
            return;
        }
    }

    void push_back(int x)
    {

        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "pushhed " << x << " in back of deque.\n";
            return;
        }
        else if (IsFull())
        {
            cout << "array overflow \n";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushhed " << x << " in back of deque.\n";
            return;
        }
    }

    // pop front
    void pop_front()
    {
        if (IsEmpty())
        {
            cout << "array underflow \n";
            return;
        }
        else
        {
            cout << "poped " << arr[front] << " in back of deque.\n";
            if (front == rear)
            {
                front = rear = -1;
                return;
            }
            else
            {
                front = (front + 1) % size;
                return;
            }
        }
    }
    // pop back
    void pop_back()
    {
        if (IsEmpty())
        {
            cout << "array underflow \n";
            return;
        }
        else
        {
            cout << "poped " << arr[rear] << " in back of deque.\n";
            if (front == rear)
            {
                front = rear = -1;
                return;
            }
            else
            {
                rear = (rear - 1 + size) % size;
                return;
            }
        }
    }

    void start()
    {
        if (IsEmpty())
        {
            cout << "deque is empty.\n";
            return;
        }
        else
        {
            cout << "start element of deque " << arr[front] << endl;
            return;
        }
    }
    void end()
    {
        if (IsEmpty())
        {
            cout << "deque is empty.\n";
            return;
        }
        else
        {
            cout << "end element of deque " << arr[rear] << endl;
            return;
        }
    }
};

int main()
{
    int t;
    cout << "enter the size of array : ";
    cin >> t;
    dequeue d(t);
    d.push_front(90);
    d.push_front(6);
    d.pop_back();
    d.push_back(89);
    d.push_back(100);
    d.pop_back();
    d.start();
    d.end();
    cout << d.IsEmpty() << endl;
    cout << d.IsFull() << endl;
}