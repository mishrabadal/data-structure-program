#include <iostream>
using namespace std;
#include <bits/stdc++.h>
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
// Merge two binary Max heaps
void Heapify(vector<int> &ans, int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < n && ans[left] > ans[largest])
        largest = left;
    if (right < n && ans[right] > ans[largest])
        largest = right;

    if (largest != index)
    {
        swap(ans[largest], ans[index]);
        Heapify(ans, largest, n);
    }
}
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
        ans.push_back(a[i]);

    for (int i = 0; i < m; i++)
        ans.push_back(b[i]);

    // convert the vector into max heap
    n = ans.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(ans, i, n);
    return ans;
}

// Is Binary Tree Heap
int count(Node *root)
{
    if (!root)
        return 0;
    return 1 + count(root->left) + count(root->right);
}

bool CBT(Node *root, int index, int total_nodes)
{
    if (!root)
        return 1;
    if (index >= total_nodes)
        return 0;
    return CBT(root->left, 2 * index + 1, total_nodes) && CBT(root->right, 2 * index + 2, total_nodes);
}
bool MaxHeap(Node *root)
{
    // one node exist atleast

    if (root->left)
    {
        if (root->data < root->left->data)
            return 0;
        if (!MaxHeap(root->left))
            return 0;
    }
    if (root->right)
    {
        if (root->data < root->right->data)
            return 0;
        return MaxHeap(root->right);
    }
    return 1;
}
bool isHeap(struct Node *tree)
{
    // count nodes in the tree
    int num = count(tree);
    // CBT hai ya nhi
    if (!CBT(tree, 0, num))
        return 0;

    // Every parent>=child
    return MaxHeap(tree);
}
// BST to max heap
void inorder(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
void postorder(Node *root, vector<int> &ans, int &index)
{
    if (!root)
        return;
    // left
    postorder(root->left, ans, index);
    // right
    postorder(root->right, ans, index);
    // node
    root->data = ans[index];
    index++;
}
void convertToMaxHeapUtil(Node *root)
{
    // inorder traversal
    vector<int> ans;
    inorder(root, ans);
    // post order traversal
    int index = 0;
    postorder(root, ans, index);
}
int main()
{

    return 0;
}