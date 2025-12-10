// stack implemintation with array

#include <iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;

public:
    // costracture
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "pushed " << value << " into the stack.\n";
        }
    }
    // pop
    void pop()
    {
        if (top == -1)
        {
            cout << "stack under flow.\n";
            return;
        }
        else
        {
            cout << "popped " << arr[top] << " from stack\n";
            top--;
        }
    }
    // peek
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty.\n";
            return 0;
        }
        else
        {
            return arr[top];
        }
    }

    // IsEmpty
    bool IsEmpty()
    {
        return top == -1;
    }
    // IsSize
    int IsSize()
    {
        return top + 1;
    }
};

int main()
{
    stack s(5);
    // s.push(6);
    // s.push(7);
    s.push(-2);
    cout << s.peek() << endl;
    cout << s.IsSize() << endl;
    // s.pop();
    // s.pop();
    // s.pop();
    // cout << s.IsEmpty() << endl;
    // s.IsSize();
}