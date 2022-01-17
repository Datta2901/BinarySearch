//Tc - O(nlogn)
//SC - O(1)
bool solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int diff = nums[1] - nums[0];
    for(int i = 1; i < n - 1; i++){
        if(diff != nums[i + 1] - nums[i]){
            return false;
        }
    }
    return true;
}