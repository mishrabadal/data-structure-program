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

struct LNode
{ // Linked List
    int data;
    struct LNode *next;
    LNode(int x)
    {
        data = x;
        next = NULL;
    }
};
struct TNode
{ // Tree
    int data;
    struct TNode *left;
    struct TNode *right;
    TNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Sorted Linked List to BST
TNode *BuildBST(vector<int> &Tree, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = start + (end - start + 1) / 2;
    TNode *root = new TNode(Tree[mid]);
    root->left = BuildBST(Tree, start, mid - 1);
    root->right = BuildBST(Tree, mid + 1, end);
    return root;
}
TNode *sortedListToBST(LNode *head)
{
    vector<int> Tree;
    while (head)
    {
        Tree.push_back(head->data);
        head = head->next;
    }
    return BuildBST(Tree, 0, Tree.size() - 1);
}

// Merge two BST 's
void inorder(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

vector<int> merge(Node *root1, Node *root2)
{
    vector<int> ans1;
    vector<int> ans2;
    inorder(root1, ans1);
    inorder(root2, ans2);
    vector<int> ans;
    int i = 0, j = 0;
    while (i < ans1.size() && j < ans2.size())
    {
        if (ans1[i] < ans2[j])
            ans.push_back(ans1[i++]);
        else
            ans.push_back(ans2[j++]);
    }
    while (i < ans1.size())
    {
        ans.push_back(ans1[i++]);
    }
    while (j < ans2.size())
    {
        ans.push_back(ans2[j++]);
    }
    return ans;
}
//Fixing Two nodes of a BST; time = O(n), space = (1);
void correctBST(Node *root)
{
    Node *curr = NULL;
    Node *first = NULL, *second = NULL;
    Node *last = NULL, *present = NULL;
    while (root)
    {
        // left doesn't exist
        if (!root->left)
        {
            last = present;
            present = root;
            if (last && last->data > present->data)
            {
                if (!first)
                    first = last;
                second = present;
            }
            root = root->right;
        }
        // left exist
        else
        {
            curr = root->left;
            while (curr->right && curr->right != root)
            {
                curr = curr->right;
            }
            // left subtree not traverse yet
            if (!curr->right)
            {
                curr->right = root;
                root = root->left;
            }
            // left subtree already traversed
            else
            {
                curr->right = NULL;
                last = present;
                present = root;
                if (last && last->data > present->data)
                {
                    if (!first)
                        first = last;

                    second = present;
                }
                root = root->right;
            }
        }
    }
    int num = first->data;
    first->data = second->data;
    second->data = num;
}
int main()
{

    return 0;
}