#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

void shortestPath(int src, int dest)
{
    visited[src] = true;
    path.push_back(src);
    if (src == dest)
    {
        if (shortpath.empty() || shortpath.size() > path.size())
            shortpath = path;
    }
    else
    {
        for (auto it : adj[src])
        {
            if (!visited[it])
                shortestPath(it, dest);
        }
    }
    path.pop_back();
    visited[src] = false;
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
    
    shortestPath(1, 5);
    for (auto it : shortpath)
        cout << it << " ";
    cout << endl;


    return 0;
}