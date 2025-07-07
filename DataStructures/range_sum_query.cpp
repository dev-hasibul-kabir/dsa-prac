#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, -4, 5, 6, 1, 6, 8};
    vector<int> prefix_sum={0};
    prefix_sum[0]=arr[0];
    int q = 3;
    int l, r;
    for(int i = 1; i < arr.size(); i++){
        prefix_sum.push_back(prefix_sum[i-1] + arr[i]);
    }

      while(0 < q){
        cin >> l >> r;
        l--;
        r--;
        if(l==0){
            cout << prefix_sum[r] << endl;
        }else{
            cout << prefix_sum[r] - prefix_sum[l-1] << endl;
        }

        q--;
    }

    return 0;
}
