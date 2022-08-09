bool solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int size = nums.size();
    return nums[size - 1] > 2 * nums[size - 2];
}