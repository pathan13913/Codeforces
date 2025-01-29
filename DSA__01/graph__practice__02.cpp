// #include <iostream>
// #include <vector>
// using namespace std;

// void printAllPathsHelper(int u, int dest, vector<vector<int>>& adjList, vector<int>& path, vector<bool>& visited) {
//     // Add the current node to the path
//     path.push_back(u);
//     visited[u] = true;

//     // If we reached the destination, print the path
//     if (u == dest) {
//         for (int node : path) {
//             cout << node << " ";
//         }
//         cout << endl;
//     } else {
//         // Explore all the neighbors of the current node
//         for (int v : adjList[u]) {
//             if (!visited[v]) { // If the neighbor is not visited, explore it
//                 printAllPathsHelper(v, dest, adjList, path, visited);
//             }
//         }
//     }

//     // Backtrack: remove the current node from the path and mark it as not visited
//     path.pop_back();
//     visited[u] = false;
// }

// int main() {
//     int n = 5; // Number of nodes
//     vector<vector<int>> adjList(n); // Adjacency list to store the graph

//     // Add edges (for example, the graph will have these edges)
//     adjList[0].push_back(1);
//     adjList[0].push_back(2);
//     adjList[1].push_back(3);
//     adjList[2].push_back(3);
//     adjList[3].push_back(4);

//     int src = 0, dest = 4; // Source and destination nodes

//     vector<int> path; // To store the current path
//     vector<bool> visited(n, false); // To track visited nodes

//     cout << "All paths from " << src << " to " << dest << " are:" << endl;
//     printAllPathsHelper(src, dest, adjList, path, visited); // Start DFS from source

//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

void printAllPathsHelper(int u, int dest, vector<vector<int>>& adjList, vector<int>& path, vector<bool>& visited, vector<vector<int>>& allPaths) {
    // Add the current node to the path
    path.push_back(u);
    visited[u] = true;

    // If we reached the destination, add the path to allPaths
    if (u == dest) {
        allPaths.push_back(path);
    } else {
        // Explore all the neighbors of the current node
        for (int v : adjList[u]) {
            if (!visited[v]) { // If the neighbor is not visited, explore it
                printAllPathsHelper(v, dest, adjList, path, visited, allPaths);
            }
        }
    }

    // Backtrack: remove the current node from the path and mark it as not visited
    path.pop_back();
    visited[u] = false;
}

vector<vector<int>> printAllPaths(int src, int dest, vector<vector<int>>& adjList, int n) {
    vector<vector<int>> allPaths; // To store all paths
    vector<int> path;             // Current path
    vector<bool> visited(n, false); // To track visited nodes

    // Call the helper function
    printAllPathsHelper(src, dest, adjList, path, visited, allPaths);

    return allPaths;
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<int>> adjList(n); // Adjacency list to store the graph

    // Add edges (example graph)
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[2].push_back(3);
    adjList[3].push_back(4);

    int src = 0, dest = 4; // Source and destination nodes

    // Get all paths from src to dest
    vector<vector<int>> allPaths = printAllPaths(src, dest, adjList, n);

    // Print all paths
    cout << "All paths from " << src << " to " << dest << " are:" << endl;
    for (const auto& path : allPaths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
