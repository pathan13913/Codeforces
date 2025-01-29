#include <iostream>
#include <vector>
#include <set>

using namespace std;

// DFS function to find all paths
void dfs(const vector<vector<int>> &graph, int src, int dest, vector<int> &path, vector<vector<int>> &allPaths, vector<bool> &visited, bool isDirected) {
    path.push_back(src);
    visited[src] = true;

    if (src == dest) {
        allPaths.push_back(path);
    } else {
        for (int neighbor : graph[src]) {
            if (!visited[neighbor]) {
                dfs(graph, neighbor, dest, path, allPaths, visited, isDirected);
            }
        }
    }

    path.pop_back(); // Backtrack
    visited[src] = false; // Mark node as unvisited if undirected or after visiting all paths
}

// Function to find all paths in a graph (directed or undirected)
vector<vector<int>> getAllPaths(int V, vector<pair<int, int>> &edges, int src, int dest, bool isDirected) {
    vector<vector<int>> graph(V);

    for (auto edge : edges) {
        graph[edge.first].push_back(edge.second);
        if (!isDirected) {
            graph[edge.second].push_back(edge.first);  // Add reverse edge if undirected
        }
    }

    vector<vector<int>> allPaths;
    vector<int> path;
    vector<bool> visited(V, false);

    dfs(graph, src, dest, path, allPaths, visited, isDirected);

    return allPaths;
}

int main() {
    int V = 5; // Number of vertices
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {2, 4}, {4, 3}};
    int src = 0, dest = 3;

    cout << "All paths in a DIRECTED graph from " << src << " to " << dest << ":\n";
    vector<vector<int>> directedPaths = getAllPaths(V, edges, src, dest, true);
    for (const auto &path : directedPaths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    cout << "\nAll paths in an UNDIRECTED graph from " << src << " to " << dest << ":\n";
    vector<vector<int>> undirectedPaths = getAllPaths(V, edges, src, dest, false);
    for (const auto &path : undirectedPaths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}


/*

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find all paths from src to dest using iterative BFS
vector<vector<int>> findAllPaths(int V, vector<pair<int, int>> &edges, int src, int dest, bool isDirected) {
    // Create adjacency list
    vector<vector<int>> graph(V);
    for (auto edge : edges) {
        graph[edge.first].push_back(edge.second);
        if (!isDirected) {
            graph[edge.second].push_back(edge.first);  // Add reverse edge for undirected graph
        }
    }

    vector<vector<int>> allPaths;  // To store all valid paths
    queue<vector<int>> q;          // Queue to store paths
    q.push({src});                 // Start with the source node

    while (!q.empty()) {
        vector<int> path = q.front();
        q.pop();
        int lastNode = path.back();

        // If we reached the destination, store the path
        if (lastNode == dest) {
            allPaths.push_back(path);
            continue;
        }

        // Explore all neighbors of the last node
        for (int neighbor : graph[lastNode]) {
            // Prevent revisiting nodes in the same path to avoid cycles
            if (find(path.begin(), path.end(), neighbor) == path.end()) {
                vector<int> newPath = path;   // Copy current path
                newPath.push_back(neighbor);  // Add neighbor to path
                q.push(newPath);              // Add new path to the queue
            }
        }
    }

    return allPaths;
}

int main() {
    int V = 4;  // Number of vertices
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {1, 2}};
    int src = 0, dest = 3;

    cout << "Paths in a DIRECTED graph from " << src << " to " << dest << ":\n";
    vector<vector<int>> directedPaths = findAllPaths(V, edges, src, dest, true);
    for (const auto &path : directedPaths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    cout << "\nPaths in an UNDIRECTED graph from " << src << " to " << dest << ":\n";
    vector<vector<int>> undirectedPaths = findAllPaths(V, edges, src, dest, false);
    for (const auto &path : undirectedPaths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}




*/