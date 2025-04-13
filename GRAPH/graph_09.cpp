#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>

// Prerequisite Tasks
bool isPossible(int N, int P, vector<pair<int, int>> &prerequisites)
{
    // here N is total number of task
    // adjacency list create karo
    vector<int> adj[N];
    vector<int> InDeg(N, 0);
    for (int i = 0; i < P; i++)
    {
        adj[prerequisites[i].second].push_back(prerequisites[i].first);
        InDeg[prerequisites[i].first]++; // indegree ko 1 se badhana
    }
    // kahn's algorithm
    queue<int> q;
    for (int i = 0; i < N; i++)
        if (!InDeg[i])
            q.push(i);

    int count = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;
        // look at the neighbour
        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--; // node jisse connect hai uski indegree ko 1 se kam
            if (!InDeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    return count == N;
}

// Course Schedule
vector<int> findOrder(int N, int P, vector<vector<int>> prerequisites)
{
    // here N is total number of task
    // adjacency list create karo
    vector<int> adj[N];
    vector<int> InDeg(N, 0);
    for (int i = 0; i < P; i++)
    {
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        InDeg[prerequisites[i][0]]++; // indegree ko 1 se badhana
    }
    // kahn's algorithm
    queue<int> q;
    for (int i = 0; i < N; i++)
        if (!InDeg[i])
            q.push(i);

    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        // look at the neighbour
        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--; // node jisse connect hai uski indegree ko 1 se kam
            if (!InDeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }
    vector<int> temp;
    return ans.size() == N ? ans : temp;
}

// Alien Dictionary
string findOrder(vector<string> &dict)
{

    // calculating Unique charcter
    set<char> uniqueChars;
    for (string word : dict)
    {
        for (char c : word)
        {
            uniqueChars.insert(c);
        }
    }
    int N = dict.size();
    int K = uniqueChars.size(); // total number of character

    // start coding from here

    vector<int> adj[K];
    vector<int> InDeg(K, 0);
    for (int i = 0; i < N - 1; i++)
    {
        string str1 = dict[i], str2 = dict[i + 1];
        int j = 0, k = 0;
        while (j < str1.size() && k < str2.size() && str1[j] == str2[k])
            j++, k++;

        if (j == str1.size() || k == str2.size())
            continue;
        adj[str1[j] - 'a'].push_back(str2[k] - 'a');
        InDeg[str2[k] - 'a']++;
    }

    // kahn's algorithm
    queue<int> q;
    for (int i = 0; i < K; i++)
        if (!InDeg[i])
            q.push(i);
    string ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        char c = 'a' + node;
        ans += c;
        // look at the neighbour
        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--; // node jisse connect hai uski indegree ko 1 se kam
            if (!InDeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    return ans;
}
// 2050. Parallel Courses III (leetcode)
int minimumTime(int n, vector<vector<int>> &relations, vector<int> &time)
{

    // create adjacency list
    vector<int> adj[n];
    for (int i = 0; i < relations.size(); i++)
    {
        // convert them into 0 based indexing
        adj[relations[i][0] - 1].push_back(relations[i][1] - 1);
    }
    vector<int> InDeg(n, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < adj[i].size(); j++)
            InDeg[adj[i][j]]++;

    queue<int> q;
    for (int i = 0; i < n; i++)
        if (!InDeg[i])
            q.push(i);

    // maximum time to complete previous course
    vector<int> CourseTime(n, 0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--;
            if (!InDeg[adj[node][j]])
                q.push(adj[node][j]);
            // maximum time to complete previous course + present course time
            CourseTime[adj[node][j]] = max(CourseTime[adj[node][j]], CourseTime[node] + time[node]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, CourseTime[i] + time[i]);
    }
    return ans;
}

int main()
{

    return 0;
}