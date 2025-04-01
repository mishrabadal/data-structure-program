#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
// Merge K sorted linked lists
class Compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data; // creating min  heap; heap ke case me ye ulta kaam karta hai
    }
};

Node *mergeKLists(vector<Node *> &arr)
{
    priority_queue<Node *, vector<Node *>, Compare> p(arr.begin(), arr.end());

    Node *root = new Node(0);
    Node *tail = root;
    Node *temp;
    while (!p.empty())
    {
        temp = p.top();
        p.pop();
        tail->next = temp;
        tail = tail->next;
        if (temp->next)
            p.push(temp->next);
    }
    return root->next;
}

// Merge k Sorted Arrays
vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    vector<pair<int, pair<int, int>>> temp;
    for (int i = 0; i < K; i++)
    {
        temp.push_back(make_pair(arr[i][0], make_pair(i, 0)));
    }

    // min heap
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p(temp.begin(), temp.end());
    // data row col(pair)
    vector<int> ans; // vector which will store the answer
    pair<int, pair<int, int>> Element;
    int i, j;
    while (!p.empty())
    {
        Element = p.top();
        p.pop();
        ans.push_back(Element.first);
        int i = Element.second.first;
        j = Element.second.second;
        if (j + 1 < K)
            p.push(make_pair(arr[i][j + 1], make_pair(i, j + 1)));
    }
    return ans;
}

// 2nd way to solve the same problem
//  merge sort
void merge(vector<int> &a, int mid, int low, int high)
{
    int i, j, k, b[a.size()];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(vector<int> &arr, int low, int high, int portion, int k)
{

    if (portion < 2)
        return;
    int mid = low + (portion / 2) * k - 1;
    mergeSort(arr, low, mid, portion / 2, k);
    mergeSort(arr, mid + 1, high, portion - portion / 2, k);
    merge(arr, mid, low, high);
}

vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    vector<int> ans;
    for (int i = 0; i < K; i++)
        for (int j = 0; j < K; j++)
        {
            ans.push_back(arr[i][j]);
        }
    mergeSort(ans, 0, ans.size() - 1, K, K);
    return ans;
}
int main()
{

    return 0;
}