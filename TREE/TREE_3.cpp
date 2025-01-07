#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class node
{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
// tree coding start using recursion t(n)=n  ,s(n)=o(h) , wc s(n)=o(n)
node *binary_tree(list<int> &arr)
{
    int x = arr.front();
    arr.pop_front();

    if (x == -1)
        return NULL;

    node *temp = new node(x);
    // cout << endl;
    //    cout << "enter the left child of " << x << " : " << arr.front();
    temp->left = binary_tree(arr);
    //  cout << endl;
    //   cout << "enter the right child of " << x << " : " << arr.front();
    temp->right = binary_tree(arr);
    return temp;
}
node *default_bt()
{
    list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, -1, 20, -1, -1};
    // list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, 6, -1, -1, 7, -1, 8, 9, -1, -1, 10, -1, -1};
    // cout << "enter the root node : " << arr.front();
    node *root;
    root = binary_tree(arr);
    return root;
}

// traverse the node level wise
void level_order_traversal(node *root)
{
    queue<node *> q;
    q.push(root);
    vector<int> ans;
    node *temp;
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

// count total node in binary tree
// method 1 same as pre order traversal
void total_node(node *root, int &count)
{

    if (root == NULL)
        return;
    count++;
    total_node(root->left, count);
    total_node(root->right, count);
}
// method 2
int total_node(node *root)
{
    if (root == NULL)
        return 0;
    return (1 + total_node(root->left) + total_node(root->right));
}

// total sum of node element
// method 1
void total_sum(node *root, int &sum)
{

    if (root == NULL)
        return;
    sum = sum + root->data;
    total_sum(root->left, sum);
    total_sum(root->right, sum);
}
// method 2
int total_sum(node *root)
{
    if (root == NULL)
        return 0;
    return (root->data + total_sum(root->left) + total_sum(root->right));
}

// count total leaf node
// method 1
void count_leaf(node *root, int &count)
{
    if (root == NULL)
        return;
    if (!root->left && !root->right)
    {
        count++;
        return;
    }
    count_leaf(root->left, count);
    count_leaf(root->right, count);
}
// method 2
int count_leaf(node *root)
{
    if (root == NULL)
        return 0;
    if (!root->left && !root->right)
    {
        return 1;
    }
    return (count_leaf(root->left) + count_leaf(root->right));
}

int main()
{
    node *root = default_bt();
    // level_order_traversal(root);

    int count = 0;
    count_leaf(root, count);
    cout << count << endl;
    cout << count_leaf(root);
    // cout << "total number of node in binary tree : " << count << endl;

    //     int sum =0;
    //  total_sum(root,sum);
    //  cout<<sum;
    return 0;
}