// inssert a node at end in doubly linked list and creat by array 

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node *head = NULL , *tail = NULL;

    // creat a doubly linked list with help of array
    int arr[] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++)
    {
        // linked list doesnt exist
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }

        // exist krati ho 
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // Insert a node at beginning;
    // linked list doesnt exist
    if (head == NULL)
    {
        head = new Node(5);
    }
    // linked list already exist
    else
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // print value 

    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}