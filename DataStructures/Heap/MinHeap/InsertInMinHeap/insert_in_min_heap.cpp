#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> tree = {2, 3, 10, 4, 5};
   int x;
   cout << "Enter value to insert: ";
   cin >> x;
   tree.push_back(x);

   int curr_index = tree.size() - 1;

   while(curr_index != 0){
        int parent_index = (curr_index -1)/2;
    if(tree[parent_index] > tree[curr_index]){
        swap(tree[parent_index], tree[curr_index]);
        curr_index = parent_index;
    }else{
        break;
    }
   }

   for(int i : tree){
    cout << i << " ";
   }


    return 0;
}
