#include <iostream>
using namespace std;
#include <queue>
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
node *binary_tree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    node *temp = new node(x);
    cout << "enter the left child of " << x << " : ";
    temp->left = binary_tree();
    cout << "enter the right child of " << x << " : ";
    temp->right = binary_tree();
    return temp;
}
int main()
{
    cout << "enter the root node : ";
    node *root;
    root = binary_tree();
    return 0;
}