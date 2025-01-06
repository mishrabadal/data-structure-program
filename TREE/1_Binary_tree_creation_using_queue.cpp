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
// tree coding start
int main()
{
    int x;
    cout << "enter the root element : ";
    cin >> x;
    int first, second;
    queue<node *> q;
    node *root = new node(x);
    q.push(root); // root ka address push ho rha hai
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // left child
        cout << "enter the left child of " << temp->data << " : ";
        cin >> first;
        if (first != -1)
        {

            temp->left = new node(first);
            q.push(temp->left);
        }
        // right child
        cout << "enter the right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
    return 0;
}