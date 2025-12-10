// delete a node at end in doubly linked list and creat by array

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
    Node *head = NULL, *tail = NULL;

    // creat a doubly linked list with help of array
    int arr[] = {2,4,6,8,10};

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

    // delete at end
    if (head != NULL)
    {
        // if only one node is exist
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "work done";
        }

        // if more than one Node exist
        else
        {
            Node *curr = head;
            // move the curr at last node
            while (curr->next)
            {
                curr = curr->next;
            }
            
                curr->prev->next = NULL;
                delete curr;
        }
    }

    else
    {
        cout << "No any Node present for delete";
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