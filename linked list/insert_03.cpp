// insert a node at end in linked list .

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
    Node *Head, *tail;
    tail = Head = NULL;
    // Head = new Node(4);
    
    int arr[] = {2, 4, 6, 8, 10};
    // Insert the node at beginning
    for (int i = 0; i < 5; i++)
    {

        // linked list does'nt exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail= Head ;
        }

        // linked list exist karti ho
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
           
        }
    }
    // print the value

    Node *temp;
    temp =Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
