#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

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

int main()
{

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (isCycleDirected(0))
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detected" << endl;

    return 0;
}