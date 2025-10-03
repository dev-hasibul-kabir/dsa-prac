#include<bits/stdc++.h>
using namespace std;

void bfs(int root, vector<vector<int>> &adj_list, vector<bool> &visited, vector<int> &parent){
    queue<int> q;
    q.push(root);
    visited[root] = true;

    while(!q.empty()){
        int curr_root = q.front();
        q.pop();

        cout << curr_root << " ";
        for(int i : adj_list[curr_root]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                parent[i] = curr_root;

            }
        }

    }
}

int main(){
    int n, e, des;
    cout << "Enter total vertices: ";
    cin >> n;
    cout << "Enter total edges: ";
    cin >> e;
    cout << "Enter destination: ";
    cin >> des;

    vector<vector<int>> adj_list(n);
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);
    vector<int> path;


    cout << "Enter edge connections: " << endl;
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    cout << "BFS: ";
    bfs(0, adj_list, visited, parent);
    cout << endl;

    int d = des;
    while(d != -1){
       path.push_back(d);
        d = parent[d];
    }

    reverse(path.begin(), path.end());
    cout << "Shortest path: ";
    for(int i : path){
        cout << i << " ";
    }


    return 0;
}
