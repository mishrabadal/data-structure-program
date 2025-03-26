#include <iostream>
#include <stdlib.h>
#include <vector>
#include<stack>
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
Node *BST(vector<int> &preorder, int &index, int lower, int upper)
{
    if (index == preorder.size() || preorder[index] < lower || preorder[index] > upper)
        return NULL;
    Node *root = new Node(preorder[index++]);
    root->left = BST(preorder, index, lower, root->data);
    root->right = BST(preorder, index, root->data, upper);
    return root;
}

// construct tree from post order
Node *BST(int post[], int &index, int lower, int upper)
{
    if (index < 0 || post[index] < lower || post[index] > upper)
        return NULL;
    Node *root = new Node(post[index--]);

    root->right = BST(post, index, root->data, upper);
    root->left = BST(post, index, lower, root->data);
    return root;
}

Node *constructTree(int post[], int size)
{
    int index = size - 1;
    return BST(post, index, INT_MIN, INT_MAX);
}

void BST(int arr[], int &index, int lower, int upper, int N)
{
    if (index == N || arr[index] < lower || arr[index] > upper)
        return;
    int value = arr[index++];
    // left
    BST(arr, index, lower, value, N);
    // right
    BST(arr, index, value, upper, N);
}
int canRepresentBST(int arr[], int N)
{
    int index = 0;
    BST(arr, index, INT_MIN, INT_MAX, N);
    return index==N;
}


//2nd way to solve above problem using stack
int canRepresentBST(int arr[], int N)
{
   stack<int>lower,upper;
   lower.push(INT_MIN);
   upper.push(INT_MAX);
   int left,right;
   for(int i=0;i<N;i++)
   {
    //1
    if(arr[i]<lower.top())
    return 0;
    //2
    while(arr[i]>upper.top())
    {
        upper.pop();
        lower.pop();
    }
    //3
    left =lower.top();
    right = upper.top();
    lower.pop();
    upper.pop();
    //right side
    lower.push(arr[i]);
    upper.push(right);
    //left side
    lower.push(left);
    upper.push(arr[i]);
   } 
   return 1;
}
void default_bst()
{
    int arr[] = {3, 7, 4, 1, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
}

int main()
{

    default_bst();
    return 0;
}