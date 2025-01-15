#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter number of vertices and edges\n";
    int n, m; // n is number of vertices, m is number of edges.
    cin >> n >> m;
    bool adjMat[n][n]; // adjacency matrix.
    memset(adjMat, false, sizeof(adjMat));
    vector<int> adjList[n];
    for (int i = 0; i < m; i++) {
        int u, v; // u and v are endpoints of an edge
        cin >> u >> v;
        adjMat[u][v] = true;
        // adjMat[v][u] = true; // For undirected graph
        adjList[u].push_back(v);
    }
    // Print adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << adjMat[i][j] << " ";
        cout << endl;
    }
    // Print adjacency list
    for (int u = 0; u < n; u++) {
        cout << u << ": {";
        for (int v: adjList[u])
            cout << v << " ";
        cout << "}\n";
    }
}
