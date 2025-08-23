#include<bits/stdc++.h>
using namespace std;

void del_max_el_from_mx_heap(vector<int> &heap){
    int last_idx = heap.size() - 1;
    heap[0] = heap[last_idx];
    heap.pop_back();

    int root_idx = 0;

    while(true){
        int left_child_idx = (root_idx * 2) + 1;
        int right_child_idx = (root_idx * 2) + 2;

    if(left_child_idx < heap.size() && right_child_idx < heap.size()){
        if(heap[left_child_idx] > heap[right_child_idx] && heap[left_child_idx] > heap[root_idx]){
            swap(heap[left_child_idx], heap[root_idx]);
            root_idx = left_child_idx;

        }else if(heap[right_child_idx] > heap[left_child_idx] && heap[right_child_idx] > heap[root_idx]){
            swap(heap[right_child_idx], heap[root_idx]);
            root_idx = right_child_idx;
        }else{
            break;
        }
      }else if(left_child_idx < heap.size() && heap[left_child_idx] > heap[root_idx]){
           swap(heap[left_child_idx], heap[root_idx]);
           root_idx = left_child_idx;
      }else if(right_child_idx < heap.size() && heap[right_child_idx] > heap[root_idx]){
           swap(heap[right_child_idx], heap[root_idx]);
           root_idx = right_child_idx;
      }else{
          break;
      }

    }



}

int main(){
    vector<int> heap = {76, 55, 64, 34, 23, 35, 5};
    del_max_el_from_mx_heap(heap);

    for(int i : heap){
        cout << i << " ";
    }
    return 0;
}
