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

// Insert at specific position
void Insert_at_position(Node *&head, int position, int value)
{
    Node *temp = head;
    position--;
    while (position--)
    {
        temp = temp->next;
    }
    Node *tail = new Node(value);
    tail->next = temp->next;
    temp->next = tail;
}

// Insert at beggining
void Insert_at_beginning(Node *&head, int value)
{
    Node *key = new Node(value);
    key->next = head;
    head = key;
}

// insert at end
void Insert_at_end(Node *&head, int value)
{
    Node *temp2 = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp2;
}

// delete at beggining
void delete_at_beggining(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}
// delete at end
void delete_at_end(Node *&head)
{
    Node *prev, *curr = head;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}
// delete a specific node 
void delete_at_specific(Node* &head, int pos)
{
    Node *prev, *curr = head;
    pos--;
    while(pos--)
    {
        prev = curr;
        curr = curr->next;

    }
    prev->next = curr->next;
    delete curr;
}

int main()
{
    Node *head, *temp;
    head = NULL;
    int arr[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            temp = head;
        }

        else
        {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    Insert_at_position(head, 4, 7);
    Insert_at_beginning(head, 1);
    Insert_at_end(head, 90);
    delete_at_beggining(head);
    delete_at_end(head);
    delete_at_specific(head, 5);

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
