// stack implemintation by using linked list

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    
    //  constructer
    Node(int value)
    {
        next = NULL;
        data = value;
    }
};

class stack
{
    Node *top;
    int size; // actual size of stack
public:
    stack()
    {
        top = NULL;
        size = 0;
    }
    // push
    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "stack overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "pushed " << value << " into the stack.\n";
        }
    }
    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack under flow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "popped " << top->data << " from stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }
    // peek
    int peek()
    {
        if (top == NULL)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
        {
            cout << "peek value is :";
            return top->data;
        }
    }

    // IsEmpty
    bool IsEmpty()
    {
        return top == NULL;
    }
    // IsSize

    int IsSize()
    {
        cout << "size of satck: ";
        return size;
    }
};

int main()
{
    stack obj;
    obj.push(3);
    obj.push(4);
    // obj.push(5);
    obj.push(90);
    // obj.pop();
    // obj.pop();
    cout << obj.peek() <<endl;
    cout << obj.IsSize() <<endl;
    cout << obj.IsEmpty() <<endl;

    return 0;
}