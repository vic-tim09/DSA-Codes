// create a Tree in deapth wise and travesal
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

// preorder traversal
void Preorder(Node *root)
{
    if (root == NULL)
        return;

    // Node
    cout << root->data << " ";
    // left
    Preorder(root->left);
    // right
    Preorder(root->right);
}
// Inorde traversal
void Inorder(Node *root)
{
    if (root == NULL)
        return;

    // left
    Inorder(root->left);
    // Node
    cout << root->data << " ";
    // right
    Inorder(root->right);
}

// Postorder traversal
void Postorder(Node *root)
{
    if (root == NULL)
        return;

    // left
    Postorder(root->left);
    // right
    Postorder(root->right);
    // Node
    cout << root->data << " ";
}

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    // left child node
    cout << "Enter the left child of " << x << " : ";
    temp->left = BinaryTree();
    // right child node
    cout << "Enter the right child of " << x << " : ";
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout << "Enter the root node : ";
    Node *root;
    root = BinaryTree();
    // tree creation code

    // print preorder
    cout << "Preorder : ";
    Preorder(root);
    // print Inorder
    cout << "\nInorder : ";
    Inorder(root);
    // print postorder
    cout << "\nPostorder : ";
    Postorder(root);
}
