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
Node *insert(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    // left side
    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    // right side
    else
    {
        root->right = insert(root->right, target);
    }
    return root;
}
void in_order(Node *root)
{

    if (root == NULL)
        return;
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}

// t(n)=O(n) and s(n)=O(n) in worst case
bool search(Node *root, int target)
{
    if (!root)
        return 0;
    if (root->data == target)
        return 1;
    if (root->data > target)
        return search(root->left, target);
    else
        return search(root->right, target);
}


//t(n)=o(n)
Node *deleteNode(Node *root, int target)
{
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
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }

        // 1 child exist
        else if (!root->right)//left child exist
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (!root->left)//right child exist
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child exist
        else
        {
            // find the greatest element from left
            Node *child = root->left;
            Node *parent = root;

            // right most node tak pahuchna hai
            while (child->right)
            {
                parent = child;
                child = child->right;
            }

            if (root != parent)
            {
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else
            {
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }
}
// default bst create
// T(n)=O(h)insert single element in worst case;
void default_bst()
{
    int arr[] = {3, 7, 4, 1, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
   
    Node *x = deleteNode(root, 8);
   in_order(x);
}

int main()
{
    default_bst();
    return 0;
}