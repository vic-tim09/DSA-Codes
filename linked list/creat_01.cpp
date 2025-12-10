// creat a linked list in dynamic way 

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Constructor for data initializaion
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = new Node(4);
    cout << Head->data << endl;
    cout << Head->next << endl;
    return 0;
}