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
    list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, -1, 20, -1, -1};
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
bool isIdentical(Node *r1, Node*r2)
{
if(r1==NULL && r2==NULL)
return 1;
if((!r1 && r2) || (r1 && !r2))
return 0;
if(r1->data != r2->data)
return 0;
return (isIdentical(r1->left ,r2->left) && isIdentical(r1->right , r2->right));

}
int main()
{

    Node *root = default_bt();
  // level_order_traversal(root);
   cout<<isIdentical(root,root);
    return 0;
}