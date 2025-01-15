#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <math.h>
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
// tree coding start using recursion t(n)=n  ,s(n)=o(h) , wc s(n)=o(n)
Node *binary_tree(list<int> &arr)
{
    int x = arr.front();
    arr.pop_front();

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    // cout << endl;
    //    cout << "enter the left child of " << x << " : " << arr.front();
    temp->left = binary_tree(arr);
    //  cout << endl;
    //   cout << "enter the right child of " << x << " : " << arr.front();
    temp->right = binary_tree(arr);
    return temp;
}
Node *default_bt()
{
    // list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, -1, 20, -1, -1}; //primary tree
    list<int> arr{10, 20, 40, -1, -1, 60, -1, -1, 30, -1, -1}; // balanced binary tree

    // list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, 6, -1, -1, 7, -1, 8, 9, -1, -1, 10, -1, -1};
    //  cout << "enter the root Node : " << arr.front();
    Node *root;
    root = binary_tree(arr);
    return root;
}
void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> ans;
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    cout << endl;
    for (auto i : ans)
        cout << i << " ";
}
bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
        return 1;
    if ((!r1 && r2) || (r1 && !r2))
        return 0;
    if (r1->data != r2->data)
        return 0;
    return (isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
}

void mirror(Node *&root)
{
    if (!root)
        return;

    Node *temp = root->right;
    root->right = root->left;
    root->left = temp;

    // left
    mirror(root->left);
    // right
    mirror(root->right);
}
int height(Node *root, bool &valid)
{
    if (!root)
        return 0;
    int L = height(root->left, valid);
    int R = height(root->right, valid);

    // balanced condition
    if (abs(L - R) > 1)
        valid = 0;

    return 1 + max(L, R);
}
bool isBalanced(Node *root)
{
    bool valid = 1;
    height(root, valid);
    return valid;
}

// traversal binary tree in spiral order
void findSpiral(Node *root)
{
    stack<Node *> s1; // R to L
    stack<Node *> s2; // L to R
    s1.push(root);
    vector<int> ans;
    while (!s1.empty() || !s2.empty())
    {
        // R to L
        if (!s1.empty())
        {
            while (!s1.empty())
            {
                Node *temp = s1.top();
                s1.pop();
                ans.push_back(temp->data);
                if (temp->right)
                    s2.push(temp->right);
                if (temp->left)
                    s2.push(temp->left);
            }
        }
        // L to R
        else
        {
            while (!s2.empty())
            {
                Node *temp = s2.top();
                s2.pop();
                ans.push_back(temp->data);
                if (temp->left)
                    s1.push(temp->left);
                if (temp->right)
                    s1.push(temp->right);
            }
        }
    }
    for (auto i : ans)
        cout << i << " ";
}

bool parent(Node *root, int a, int b)
{
    if (!root)
        return 0;
    if (root->left && root->right)
    {
        if (root->left->data == a && root->right->data == b)
            return 1;
        if (root->left->data == b && root->right->data == a)
            return 1;
    }
    return (parent(root->left, a, b) || parent(root->right, a, b));
}

bool isCousins(Node *root, int a, int b)
{
    queue<Node*> q;
    q.push(root);
    int l1 = -1, l2 = -2;
    int level = 0;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data == a)
                l1 = level;
            if (temp->data == b)
                l2 = level;
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        level++;
        if (l1 != l2)
            return 0;
        if (l1 != -1)
            break;
    }
    return !parent(root, a, b);
}
int main()
{

    Node *root = default_bt();
    // level_order_traversal(root);
    //     mirror(root);
    //findSpiral(root);
    cout<<isCousins(root,40,30);
    // cout << isBalanced(root);
    //    level_order_traversal(root);
    return 0;
}