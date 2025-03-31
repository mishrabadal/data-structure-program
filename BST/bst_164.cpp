#include <iostream>
#include <stdlib.h>
#include <vector>
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

void in_order(Node *root)
{

    if (root == NULL)
        return;
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}

// checking given Binary tree is bst  or not
void inorder(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
bool isBST(Node *root)
{
    vector<int> ans;
    inorder(root, ans);
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] <= ans[i - 1])
            return 0;
    }
    return 1;
}

// 2nd way to check bst is or not
bool BST(Node *root, int &prev)
{
    if (root)
        return 1;
    bool l = BST(root->left, prev);
    if (l == 0)
        return 0;
    if (root->data <= prev)
        return 0;
    prev = root->data;
    return BST(root->right, prev);
}

// minimum distance between BST Nodes
void minDist(Node *root, int &prev, int &ans)
{
    if (!root)
        return;
    minDist(root->left, prev, ans);
    if (prev != INT_MIN)
        ans = min(ans, root->data - prev);
    prev = root->data;
    minDist(root->right, prev, ans);
}

int minDiffInBST(Node *root)
{
    int prev = INT_MIN;
    int ans = INT_MAX;
    minDist(root, prev, ans);
    return ans;
}

//sum of k smallest element in bst 
void ksum(Node *root,int &sum,int &k)
{
if(!root)
return ;
ksum(root->left,sum,k);
k--;
if(k>=0)
sum +=root->data;
if(k<=0)
return;
ksum(root->right,sum,k);
}

int sum(Node* root, int k) 
{ 
  int sum = 0;
  ksum(root,sum,k);
return  sum;   
} 

//kth largest element bst;
void KLargest(Node *root, int &ans,int &k){
if(!root)
return;
KLargest(root->right,ans,k);
k--;
if(k==0)
ans=root->data;
if(k<=0)
return;
KLargest(root->left,ans,k);
}
int kthLargest(Node *root, int k) {
    int ans ;
    KLargest(root,ans,k);
    return ans;
}

// Array to BST
void  ArrayToBST(vector<int>& arr,int start,int end,vector<int>& ans){

    if(start>end)
    return;
    int mid= start+(end-start)/2;
    ans.push_back(arr[mid]);
    //left side
    ArrayToBST(arr,start,mid-1,ans);
    //right side
    ArrayToBST(arr,mid+1,end,ans);

}
vector<int> sortedArrayToBST(vector<int>& nums) {
    vector<int>ans;
    ArrayToBST(nums,0,nums.size()-1,ans);
    cout<<&ans[0]<<endl;
    return ans;
}

int main()
{

    vector<int>nums={ 1, 2, 3, 4, 5, 6, 7};
    vector<int>x= sortedArrayToBST(nums);
 for(auto i :x)
 cout<<i<<" ";
    return 0;
}