// crate a AVL tree with all rortation and print preorder and inorder 
#include <iostream>
using namespace std;

class Node
{
public:
    int data, hight;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        hight = 1;
        left = right = NULL;
    }
};

int gethight(Node *root) // check hight of this node
{
    if (!root)
        return 0;

    return root->hight;
}

int getbalance(Node *root) // check balance tree
{
    return gethight(root->left) - gethight(root->right);
}

// rotations funtion
Node *rightRotation(Node *root) // Right rotation
{
    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    // update the hight
    root->hight = 1 + max(gethight(root->left), gethight(root->right));
    child->hight = 1 + max(gethight(child->left), gethight(child->right));

    return child;
}
Node *leftRotation(Node *root) // left rotation
{
    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    // update the hight
    root->hight = 1 + max(gethight(root->left), gethight(root->right));
    child->hight = 1 + max(gethight(child->left), gethight(child->right));

    return child;
}

Node *insert(Node *root, int key)
{
    // Does'n exist //root null
    if (!root)
        return new Node(key);

    //  exist krta hai
    if (key < root->data) // left side
        root->left = insert(root->left, key);

    else if (key > root->data) // right side
        root->right = insert(root->right, key);

    else // dublicate element are not allow
        return root;

    // update hight
    root->hight = 1 + max(gethight(root->left), gethight(root->right));

    // balance check
    int balance = getbalance(root);

    // left left case
    if (balance > 1 && key < root->left->data)
        return rightRotation(root);
    // right right case
    else if (balance < -1 && key > root->right->data)
        return leftRotation(root);

    // left right case
    else if (balance > 1 && key > root->left->data)
    {
        // root->left me store kiya taki rotation ke baad root se join ho 
        root->left = leftRotation(root->left); 
        return rightRotation(root);
    }
    
    // right left case
    else if (balance < -1 && key < root->right->data)
    {
        // root->right me store kiya taki rotation ke baad root se join ho 
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    // no unbalance
    else
        return root;
}
// print tree
void preorder(Node *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node *root)
{
    if (!root)
        return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

    cout << "preorder: ";
    preorder(root);
    cout << "\nInorder: ";
    Inorder(root);
}