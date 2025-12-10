// Deque implemintation by using linked list

#include <iostream>
using namespace std;
class Node // linked list class
{
public:
    int data;
    Node *next, *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

class dequeue // Dequeue class
{
    Node *front, *rear;

public:
    dequeue()
    {
        front = rear = NULL;
    }

    // push front
    void push_front(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "pushed " << x << " in front.\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout << "pushed " << x << " in front.\n";
            return;
        }
    }

    // push back
    void push_back(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "pushed " << x << " in back.\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout << "pushed " << x << " in back.\n";
            return;
        }
    }
    // pop front
    void pop_front()
    {
        if (front == NULL)
        {
            cout << "Dequeue underflow." << endl;
            return;
        }
        else
        {
            Node *temp = front;
            cout << "popped " << temp->data << " from front of the dequeue.\n";
            front = front->next;
            delete temp;
            // greater than 1 node present
            if (front)
                front->prev = NULL;
            // only 1 node present
            else
                rear = NULL;
            return;
        }
    }

    // pop back
    void pop_back()
    {
        if (front == NULL)
        {
            cout << "Dequeue underflow." << endl;
            return;
        }
        else
        {
            Node *temp = rear;
            cout << "popped " << temp->data << " from the back of dequeue.\n";
            rear = rear->prev;
            delete temp;
            // greater than 1 node present
            if (rear)
                rear->next = NULL;
            // only 1 node present
            else
                front = NULL;
            return;
        }
    }

    // start element
    void start()
    {
        if (front == NULL)
        {
            cout << "dequeue is empty .\n";
            return;
        }
        else
        {
            cout << "front element of dequeue is: " << front->data << endl;
            return;
        }
    }

    // end element
    void end()
    {
        if (front == NULL)
        {
            cout << "dequeue is empty \n";
            return;
        }
        else
        {
            cout << "end element of dequeue is : " << rear->data << endl;
            return;
        }
    }
};

int main()
{
    dequeue d;
    d.push_back(9);
    d.push_front(5);
    d.push_front(6);
    d.pop_front();
    d.pop_back();
    d.start();
    d.push_back(55);
    d.end();
}