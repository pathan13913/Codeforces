#include <bits/stdc++.h>
#define white 0
#define grey 1
#define black 2

using namespace std;

int n, m;
vector<int> adj[100];
bool visited[100];
int color[100];
int countDigree[100];
stack<int> topologicalOrder;

void printAdjList()
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        for (auto it : adj[i])
            cout << it << " ";
        cout << endl;
    }
}

void printDegree()
{
    for (int i = 0; i < n; i++)
        cout << i << " = " << countDigree[i] << endl;
}

void bfsPrint(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
        cout << endl;
    }
}

void dfsPrintUsigStack(int src)
{
    stack<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {

        int node = q.top();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }
}

void dfsPrintUsingRecurtion(int src)
{
    visited[src] = true;
    cout << src << " ";
    for (auto it : adj[src])
    {
        if (!visited[it])
            dfsPrintUsingRecurtion(it);
    }
}

bool isCycleDirected(int u)
{
    color[u] = grey;
    for (int v : adj[u])
    {
        if (color[v] == grey)
            return true;
        else if (color[v] == white)
            return isCycleDirected(v);
    }
    color[u] = black;
    return false;
}

int isCycleUndirected(int src, int parent)
{
    visited[src] = true;
    for (auto it : adj[src])
    {
        if (!visited[it])
        {
            if (isCycleUndirected(it, src))
                return true;
        }
        else if (it != parent)
            return true;
    }
    return false;
}

void topologicalSortUsingDFS(int src)
{
    visited[src] = true;
    for (auto it : adj[src])
    {
        if (!visited[it])
            topologicalSortUsingDFS(it);
    }
    topologicalOrder.push(src);
}

void printTopologicalSort()
{
    topologicalSortUsingDFS(0);
    while (!topologicalOrder.empty())
    {
        cout << topologicalOrder.top() << " ";
        topologicalOrder.pop();
    }
}
void findPath(int src, int dest, vector<int> &currentPath, vector<int> &shortestPath)
{
    visited[src] = true;
    currentPath.push_back(src);

    if (src == dest)
    {
        if (shortestPath.empty() || currentPath.size() < shortestPath.size())
            shortestPath = currentPath;

        // for (auto it : shortestPath)
        //     cout << it << " ";
        // cout << endl;
    }
    else
    {
        for (auto it : adj[src])
        {
            if (!visited[it])
            {
                findPath(it, dest, currentPath, shortestPath);
            }
        }
    }
    visited[src] = false;
    currentPath.pop_back();
}
void printShortestPath(int src, int dest)
{
    vector<int> shortestPath;
    vector<int> currentPath;

    findPath(src, dest, currentPath, shortestPath);
    for (auto it : shortestPath)
        cout << it << " ";
    cout << endl;
}

bool isbipartiteBFS(int n)
{
    vector<int> colorForBip(n, -1);
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (colorForBip[i] == -1)
        {
            colorForBip[i] = 0;
            q.push(i);
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : adj[node])
                {
                    if (colorForBip[it] == colorForBip[node])
                        return false;
                    else if (colorForBip[it] == -1)
                    {
                        colorForBip[it] = !colorForBip[node];
                        q.push(it);
                    }
                }
            }
        }
    }
    return true;
}

// bool isBipartiteUtil(int node, vector<int> &colorForBip, int color)
// {
//     if (colorForBip[node] == -1)
//         colorForBip[node] = color;
//     else if (colorForBip[node] != color)
//         return false;
//     for (auto it : adj[node])
//     {
//         if (!isBipartiteUtil(it, colorForBip, !color))
//             return false;
//     }
//     return true;
// }

bool isBipartiteUtil(int node, vector<int> &colorForBip, int color)
{
    colorForBip[node] = color;
    for (auto it : adj[node])
    {
        if (colorForBip[it] == -1)
        {
            if (!isBipartiteUtil(it, colorForBip, !color))
                return false;
        }
        else if (colorForBip[it] == color)
            return false;
    }
    return true;
}

bool isBipartite(int n) // vertex number pass how many vertex are there in graph
{
    vector<int> colorForBip(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (colorForBip[i] == -1)
        {
            if (!isBipartiteUtil(i, colorForBip, 0))
                return false;
        }
    }
    return true;
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
        countDigree[u]++;
        countDigree[v]++;
    }

    printAdjList();
    // printDegree();

    // if (isCycleDirected(0))
    //     cout << "directed Cyclic graph\n";
    // else
    //     cout << "directed Acyclic graph\n";

    // if (isCycleUndirected(0, -1))
    //     cout << "undirected Cyclic graph\n";
    // else
    //     cout << "undirected Acyclic graph\n";

    // printTopologicalSort();

    printShortestPath(8, 5);

    cout << endl
         << endl
         << "ok code" << endl;
    return 0;
}