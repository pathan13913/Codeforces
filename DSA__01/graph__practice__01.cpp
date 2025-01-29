#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    int v;
    int e;
    bool direction;
    int adjMatrix[100][100];
    int visited[100];
    int distance[100];
    map<int, set<int>> adjList; // unordered_map<int, vector<int>> adjList; // map<int, list<int>> adjList; // map<int, set<int>> adjList;  // map<int, unordered_set<int>> adjList; // map<int, list<int>> adjList; // map<int, vector<int>> adjList; // map<int, set<int>> adjList; // vector<int> adjList[];

    Graph(int v, int e, bool direction) : v(v), e(e), direction(direction)
    {
        for (int i = 0; i < v; i++)
        {
            visited[i] = false;
            distance[i] = 0;
            for (int j = 0; j < v; j++)
                adjMatrix[i][j] = 0;
        }
    }
    void addEdges(int u, int v)
    {
        adjList[u].insert(v); // adjList[u].push_back(v);
        if (!direction)
            adjList[v].insert(u);

        adjMatrix[u][v] = 1;
    }
    void printAdjList()
    {
        cout << "adjacency list :" << endl;
        for (auto i : adjList)
        {

            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    void printAdjMatrix()
    {
        cout << "adjacency matrix :" << endl;
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void printLeaf()
    {
        int flag = direction ? 0 : 1;
        cout << "leaf nodes : ";
        for (int i = 0; i < v; i++)
        {
            if (adjList[i].size() == flag)
                cout << i << " ";
        }
        cout << endl;
    }

    void printAllPath(int src, int dest) 
    {
        queue<vector<int>> q;
        q.push({src});
        while (!q.empty())
        {
            vector<int> curr = q.front();
            q.pop();
            int last = curr[curr.size() - 1];
            if (last == dest)
            {
                for (auto i : curr)
                    cout << i << " ";
                cout << endl;
            }
            for (auto i : adjList[last])
            {

                if (find(curr.begin(), curr.end(), i) == curr.end())
                {
                    curr.push_back(i);
                    q.push(curr);
                    curr.pop_back();
                }
            }
        }
    }


void printAllPaths(int src, int dest) {
    queue<vector<int>> q; // Queue to store paths
    q.push({src}); // Start with the source node

    while (!q.empty()) {
        vector<int> path = q.front(); // Get the front path from the queue
        q.pop();

        int lastNode = path.back(); // Get the last node in the current path

        // If the last node is the destination, print the path
        if (lastNode == dest) {
            for (int node : path) {
                cout << node << " ";
            }
            cout << endl;
        }

        // Explore neighbors of the last node
        for (int neighbor : adjList[lastNode]) {
            // If the neighbor is not already in the path, add it to a new path
            if (find(path.begin(), path.end(), neighbor) == path.end()) {
                vector<int> newPath = path; // Create a copy of the current path
                newPath.push_back(neighbor); // Add the neighbor to the new path
                q.push(newPath); // Push the new path into the queue
            }
        }
    }
}




    void BFS(int start)
    {
        cout << "BFS : ";
        queue<int> q;
        q.push(start);
        visited[start] = true;
        distance[start] = 0;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            for (auto i : adjList[curr])
            {
                if (visited[i] == false)
                {
                    visited[i] = true;
                    distance[i] = distance[curr] + 1;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int v, e; // v = vertices, e = edges
    cin >> v >> e;
    bool direction = false; // unorder / ordered graph

    Graph graph(v, e, direction);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.addEdges(u, v);
    }
    graph.printAdjMatrix();
    graph.printAdjList();
    graph.printLeaf();
    // graph.BFS(0); // pass root / where i want to start
    cout << endl;
    // graph.printShortestPath(8, 5);
    cout << endl;
    // graph.printPath(10, 5);
    cout << endl;
    graph.printAllPaths(9, 2);
    graph.printAllPath(9, 2);
    cout << endl
         << endl;
    // graph.printCycle();

    cout << endl
         << endl
         << "ok code ok";
    return 0;
}