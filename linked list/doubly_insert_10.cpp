// insert a node at any given position in doubly linked list and creat by array 

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
    
    // insert in any given possition
    
    int pos = 4;
    // inser at start
    if(pos == 0)
    {
        // linked list doesnt exist
        if(head ==NULL)
        {
            head = new Node(9);
        }
        // exist krati ho 
        else
        {
            Node *temp = new Node(9);
            temp->next = head;
            head->prev = temp;
            head = temp; 
        }
    }
    else 
    {      
    Node *curr = head;
        // Go to the Node , after which i have insert 
        
        while(--pos)
        {
            curr = curr->next;
        }
        // inser at end
        if (curr->next == NULL)
        {
            Node *temp = new Node(9);
            temp->prev = curr;
            curr->next = temp;
        }
        
        // inser at middel  
        else{
            Node *temp = new Node(9);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            curr->next->prev = temp;
        }
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