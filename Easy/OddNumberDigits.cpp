int solve(vector<int>& nums) {
    int count = 0;
    int size = nums.size();
    for(int i = 0; i < size; i++){
        int dig = log10(nums[i]) + 1;
        if(dig % 2 == 1){
            count++;
        }
    }
    return count;
}