#include<bits/stdc++.h>
#define inf 100000
#define white 0
#define grey 1
#define black 2

using namespace std;

int n, m; // n is number of vertices, m is number of edges.
vector<int> adjList[100];
int dist[100];
int color[100];

void initialize() {
    for (int i = 0; i < n; i++) {
        dist[i] = inf;
        color[i] = white;
    }
}

void bfs (int s) {
    initialize();
    dist[s] = 0;
    color[s] = grey;
    queue<int> q;
    q.push(s);
    while (not q.empty()) {
        int u = q.front();
        q.pop();
        color[u] = black;
        for (int v: adjList[u]) {
            if (color[v] == white) {
                color[v] = grey;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    cout << "Enter number of vertices and edges\n";

    cin >> n >> m;
    bool adjMat[n][n]; // adjacency matrix.
    memset(adjMat, false, sizeof(adjMat));

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
    bfs(1);
    for (int i = 0; i < n; i++) {
        cout << "dist of " << i << " is: " << dist[i] << endl;
    }
}
//Wy2V1eAy