#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cout << "Enter total vertices: ";
    cin >> n;

    vector<int> adj_list[n];

    cout << "Enter total edges: ";
    cin >> e;

    cout << "Enter edges:" << endl;
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); //for undirected graph
    }

    cout << "Adjacency List:" << endl;
    for(int i = 0; i < n; i++){
              cout << i << ": ";
        for(int j : adj_list[i]){
            cout << j << " ";
        }
    cout << endl;
    }


    return 0;
}
