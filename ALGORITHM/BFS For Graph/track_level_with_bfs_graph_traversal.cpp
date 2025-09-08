#include<bits/stdc++.h>
using namespace std;

void bfs_traversal(int src, vector<vector<int>> &adj_list, vector<bool> &visited, vector<int> &level){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int root = q.front();
        q.pop();

        cout << root << " ";

        for(int i : adj_list[root]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                level[i] = level[root] + 1;
            }
        }
    }

}

int main(){
    int n, e;
    cout << "Enter total vertices: ";
    cin >> n;
    cout << "Enter total edges: ";
    cin >> e;

    vector<vector<int>> adj_list(n);   // adjacency list
    vector<bool> visited(n, false);    // visited array
    vector<int> level(n, 0);

    cout << "Enter edge connections: " << endl;
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected graph
    }

    cout << "BFS: ";
    bfs_traversal(0, adj_list, visited, level);

cout << endl;
    cout << "level of 3:" << level[3];

    return 0;
}
