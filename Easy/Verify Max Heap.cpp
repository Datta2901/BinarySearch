#include<bits/stdc++.h>

bool solve(vector<int>& nums) {
    int n = nums.size();
    if(n == 0){
        return true;
    }
    // vector<int> ans = nums;
    // make_heap(ans.begin(),ans.end());
    for(int i = 0; i < n; i++){
        if((2 * i + 1 < n && nums[i] < nums[2 * i + 1])){
            return false;
        }
        if(2 * i + 2 < n && nums[i] < nums[2 * i + 2]){
            return false;
        }
    }
    return true;
}