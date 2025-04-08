#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define MAX 1000
int mat[MAX][MAX];
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

//Kth smallest element in Matrix . matrix is sorted in ascending order row and column wise
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    vector<pair<int,pair<int,int>>>temp;
    for(int i=0;i<n;i++)
    {
        temp.push_back(make_pair(mat[i][0],make_pair(i,0)));
    }
    //create min heap
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p(temp.begin(),temp.end());
//data(value),row,col
int ans;
pair<int,pair<int,int>>Element;
int i,j;
while(k--)
{
    Element=p.top();
    p.pop();
    ans=Element.first;//value
    i=Element.second.first;//row number
    j=Element.second.second;//col number
    if(j+1<n)
    p.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
}
return ans;
}

//Find median in a stream
vector<double> getMedian(vector<int> &arr) {
    // code here
    
    int n = arr.size();
    vector<double> result;
    
    priority_queue<double,vector<double>,greater<double>> minHeap;
    priority_queue<double,vector<double>> maxHeap;
    int maxHeapSize= 0;
    int minHeapSize = 0;
    
    for(int i =0; i < n; i++)
    {
        int num = arr[i];
        
        if(maxHeap.empty() || num < maxHeap.top())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }
        
        maxHeapSize = maxHeap.size();
        minHeapSize = minHeap.size();
        
        if(maxHeapSize > 1 + minHeapSize)
        {

            minHeap.push(maxHeap.top());
            maxHeap.pop();

            
        }
        else
        {
            if (minHeapSize > maxHeapSize)
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
        
        
        if (maxHeap.size() == minHeap.size())
        {
            result.push_back((maxHeap.top() + minHeap.top())/2.0);
        }
        else
        {
             result.push_back(maxHeap.top());
        }
    
    
    
    
    }
    
    return result;
}



int main()
{

    return 0;
}