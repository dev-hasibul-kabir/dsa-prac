#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, e;
    cout << "Total vertices: ";
    cin >> n;

    cout << "Total edge: ";
    cin >> e;

    int adj_matrix[n][n];

    memset(adj_matrix, 0, sizeof(adj_matrix));

    cout << "Enter connections:" << endl;
    while(e--){
        int a, b;
        cin >> a >> b;

        adj_matrix[a][b] = 1;
        adj_matrix[b][a] = 1; // for undirected graph
    }

     cout << endl;


    cout << "Adjacency Matrix-" << endl;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
