// delete a node at end in singly linked list

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

    // delete the last node

    if(Head != NULL){
        
        // only one node is present
        if(Head->next == NULL )
        {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        
        // more than a node is present
        else {
            Node *curr = Head;
            Node *prev = NULL;
            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
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


