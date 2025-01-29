#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);
void pringAdj()
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto it : adj[i])
            cout << it << " ";
        cout << endl;
    }
}
void printDFS(int u)
{
    visited[u] = true;
    cout << u << " ";
    for (auto it : adj[u])
    {
        if (!visited[it])
            printDFS(it);
    }
}
void topoSort(int u)
{
    visited[u] = true;
    for (auto it : adj[u])
    {
        if (!visited[it])
        {
            topoSort(it);
        }
    }
    st.push(u);
}

void allPath(int src, int dest)
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
                allPath(it, dest);
        }
    }
    path.pop_back();
    visited[src] = false;
}
bool isBirpartite(int u, int col)
{
    color[u] = col;
    for (auto it : adj[u])
    {
        if (color[it] == -1)
        {
            if (!isBirpartite(it, !col))
                return false;
        }
        else if (color[it] == col)
        {
            return false;
        }
    }
    return true;
}
bool isCycleUndirected(int u, int parent)
{
    visited[u] = true;
    for (auto it : adj[u])
    {
        if (!visited[it])
        {
            if (isCycleUndirected(it, u))
                return true;
        }
        else if (it != parent)
        {
            return true;
        }
    }
    return false;
}
bool isCycleDirected(int u)
{
    color[u] = 0;
    for (auto it : adj[u])
    {
        if (color[it] == -1)
        {
            if (isCycleDirected(it))
                return true;
        }
        else if (color[it] == 0)
            return true;
    }
    color[u] = 1;
    return false;
}
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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    pringAdj();
    cout << "ok1" << endl;

    // printDFS(0);
    // topoSort(0);
    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // allPath(7, 5);
    // for (auto it : shortpath)
    //     cout << it << " ";
    int comp = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            cout<<"component " << ++comp << " : " << component(i) << endl;
    }

    cout << endl
         << "ok2";

    return 0;
}