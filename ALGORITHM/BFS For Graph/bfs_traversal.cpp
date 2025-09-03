#include <bits/stdc++.h>
using namespace std;

void bfs_traversal(int src, vector<vector<int>> &adj_list, vector<bool> &visited) {
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int child : adj_list[curr]) {
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e;
    cout << "Enter total vertices: ";
    cin >> n;
    cout << "Enter total edges: ";
    cin >> e;

    vector<vector<int>> adj_list(n);   // adjacency list
    vector<bool> visited(n, false);    // visited array

    cout << "Enter edge connections: " << endl;
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected graph
    }

    cout << "BFS starting from 0: ";
    bfs_traversal(0, adj_list, visited);

    return 0;
}
