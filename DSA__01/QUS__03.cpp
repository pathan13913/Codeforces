#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

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

    if(isBirpartite(0, 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}