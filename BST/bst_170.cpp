#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int dataue)
    {
        data = dataue;
        left = right = NULL;
    }
};
class Box
{
public:
    bool BST;
    int size;
    int min, max;
    Box(int data)
    {
        BST = 1;
        size = 1;
        min = data;
        max = data;
    }
};

// Largest BST
Box *find(Node *root, int &TotalSize)
{
    // leaf node
    if (!root->left && !root->right)
    {
        TotalSize = max(TotalSize, 1);
        return new Box(root->data);
    }
    // only right side exist
    else if (!root->left && root->right)
    {
        Box *head = find(root->right, TotalSize);
        // bst yes
        if (head->BST && head->min > root->data)
        {
            head->size++;
            head->min = root->data;
            TotalSize = max(TotalSize, head->size);
            return head;
        }
        // bst no
        else
        {
            head->BST = 0;
            return head;
        }
    }
    // only right side exist

    else if (root->left && !root->right)
    {
        Box *head = find(root->left, TotalSize);
        // bst yes
        if (head->BST && head->max < root->data)
        {
            head->size++;
            head->max = root->data;
            TotalSize = max(TotalSize, head->size);
            return head;
        }
        // bst no
        else
        {
            head->BST = 0;
            return head;
        }
    }
    // both side exist
    else
    {
        Box *Lefthead = find(root->left, TotalSize);
        Box *Righthead = find(root->right, TotalSize);
        if (Lefthead->BST && Righthead->BST && Lefthead->max < root->data && Righthead->min > root->data)
        {
            Box *head = new Box(root->data);
            head->size += Lefthead->size + Righthead->size;
            head->min = Lefthead->min;
            head->max = Righthead->max;
            TotalSize = max(TotalSize, head->size);
            return head;
        }
        else
        {
            Lefthead->BST = 0;
            return Lefthead;
        }
    }
}
int largestBst(Node *root)
{
    int TotalSize = 0;
    find(root, TotalSize);
    return TotalSize;
}
int main()
{

    return 0;
}