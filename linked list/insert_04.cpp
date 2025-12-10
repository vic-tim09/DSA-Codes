// insert a node at a paticular position in linked list .

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
int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    // create linked list from array
    Node *temp = Head;
    for (int i = 0; i < 5; i++)
    {
        Node *newnode = new Node(arr[i]);
        if (Head == NULL)
        {
            Head = newnode;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;
    }
    // insert node at perticular position
    int x = 3; // insert position
    int value = 30;
    temp = Head;

    x--;
    while (x--)
    {
        temp = temp->next;
    };
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // print the value

    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
