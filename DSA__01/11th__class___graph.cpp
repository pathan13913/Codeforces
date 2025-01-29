#include <bits/stdc++.h>
#define white 0
#define grey 1
#define black 2

using namespace std;

int n, m;
vector<int> adj[100];
bool visited[100];
int color[100];
stack<int> topologicalOrder;

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
        if (not visited[v])
            dfs(v);
}

bool checkCycle(int u)
{
    color[u] = grey;
    for (int v : adj[u])
    {
        if (color[v] == grey)
            return true;
        else if (color[v] == white)
            return checkCycle(v);
    }
    color[u] = black;
    return false;
}

void topologicalSort(int u)
{
    visited[u] = true;
    for (int v : adj[u])
        if (not visited[v])
            topologicalSort(v);
    topologicalOrder.push(u);
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
    /*int components = 0;
    for (int i = 0; i < n; i++) {
        if (not visited[i]) {
            components++;
            dfs(i);
        }
    }
    cout << "Number of components: " << components << endl;*/
    if (checkCycle(0))
        cout << "Cyclic graph\n";
    else
        cout << "Acyclic graph\n";
    // for (int i = 0; i < n; i++)
    //     if (not visited[i])
    //         topologicalSort(i);
    // while (not topologicalOrder.empty()) {
    //     cout << topologicalOrder.top() << " ";
    //     topologicalOrder.pop();
    // }
}
// https://pastebin.com/9uv2bCsv