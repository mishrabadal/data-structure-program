#include <iostream>
using namespace std;
#include <queue>
#include <vector>
#include <list>
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
    cout << endl;
    cout << "enter the left child of " << x << " : " << arr.front();
    temp->left = binary_tree(arr);
    cout << endl;
    cout << "enter the right child of " << x << " : " << arr.front();
    temp->right = binary_tree(arr);
    return temp;
}

void pre_order(node *root)
{

    if (root == NULL)
        return;
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(node *root)
{

    if (root == NULL)
        return;
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}
void post_order(node *root)
{

    if (root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
}

int main()
{

     //list<int> arr{1,2,3,4,-1,-1,5,-1,-1,-1,20,-1,-1};
    list<int> arr{1, 2, 3, 4, -1, -1, 5, -1, -1, 6, -1, -1, 7, -1, 8, 9, -1, -1, 10, -1, -1};
    // cout<<arr.front();
    // arr.pop_front();
    //  arr.pop_front();
    //  cout<<arr.front();
    cout << "enter the root node : " << arr.front();
    node *root;
    root = binary_tree(arr);
    cout << endl;
    cout << "\n--preorder--" << endl;
    pre_order(root);
    cout << "\n--inorder--" << endl;
    in_order(root);
    cout << "\n--postorder--" << endl;
    post_order(root);
    return 0;
}