#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

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

int main()
{

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    topoSort(0);

    while (!st.empty())
    {
        cout<< st.top() << " ";
        st.pop();
    }

    return 0;
}