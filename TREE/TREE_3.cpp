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

void bt_size(node *root, int &count)
{

    if (root == NULL)
        return;
    count++;
    bt_size(root->left, count);
    bt_size(root->right, count);
}
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

int main()
{
    node *root = default_bt();
    // level_order_traversal(root);

    int count = 0;
    bt_size(root, count);
    cout << "total number of node in binary tree : " <<count << endl;
    return 0;
}