#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

int component(int u)
{
    visited[u] = true;
    int count = 1;
    for (auto it : adj[u])
    {
        if (!visited[it])
        {
            count += component(it);
        }
    }
    return count;
}

int main()
{


    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int compoCount=0;

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            compoCount++;
            cout <<compoCount<<" : " << component(i) << endl;
        }
    }
    
    return 0;
}