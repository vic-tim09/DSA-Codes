// Binary search tree insertion , search , deletion operations

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *Insert(Node *root, int target)
{
    // Base condition
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    else if (target < root->data)
        root->left = Insert(root->left, target);
    else
        root->right = Insert(root->right, target);

    return root;
}

// print Inorder  (sorted form )
void Inorder(Node *root)
{
    if (!root)
        return;

    Inorder(root->left);       // left
    cout << root->data << " "; // node
    Inorder(root->right);      // right
}

// function for search a element
bool search(Node *root, int key)
{
    if (!root)
        return 0;
    if (root->data == key)
        return 1;
    else if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// function for delete a node from BST tree
Node *deleteNode(Node *root, int target)
{
    // Base condition
    if (!root)
        return NULL;

    if (root->data > target)
    {
        root->left = deleteNode(root->left, target);
        return root;
    }

    else if (root->data < target)
    {
        root->right = deleteNode(root->right, target);
        return root;
    }

    else
    {
        // leaf Node deleted
        if (!root->left && !root->right)
        {
            cout << "Deleted the Node : " << root->data << endl;
            delete root;
            return NULL;
        }
        // one childed Node delete
        else if (!root->right) // left child exist
        {
            cout << "Deleted the Node : " << root->data << endl;
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (!root->left) // right child exist
        {
            cout << "Deleted the Node : " << root->data << endl;
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // two childed Node delete
        // find the greatest element from left
        Node *child = root->left;
        Node *parent = root;

        // right most node  tak pahuchana hai child ko
        while (child->right)
        {
            parent = child;
            child = child->right;
        }
        if (parent != root)
        {
            parent->right = child->left;
            child->left = root->left;
            child->right = root->right;
            cout << "Deleted the Node : " << root->data << endl;
            delete root;
            return child; // taki child ka connection upar wale se ho sake
        }
        else
        {
            child->right = root->left;
            cout << "Deleted the Node : " << root->data << endl;
            delete root;
            return child;
        }
    }
}

int main()
{
    int arr[] = {6, 3, 17, 5, 10, 13, 3, 20, 99, 1};
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = Insert(root, arr[i]);
    }

    cout << "Inorder: "; // print tree
    Inorder(root);

    cout << endl;
    cout << search(root, 1) << endl; // search the element

    deleteNode(root, 99);

    cout << "Inorder: "; // print tree
    Inorder(root);
}