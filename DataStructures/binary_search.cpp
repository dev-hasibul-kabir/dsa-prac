#include<bits/stdc++.h>
using namespace std;

int search_fun(vector<int> &nums, int target){

    int left = 0, right = nums.size()-1;
    while(left <= right){
           int mid = (left+right)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            left = mid + 1;
        }else if(nums[mid] > target){
            right = mid - 1;

        }


    }

 return -1;
}
int main(){
    vector<int> nums = {-1,0,3,5,9,12,7};
    int target = 6;

   cout << search_fun(nums, target);


return 0;
}
