bool solve(vector<int>& nums) {
    int n = nums.size();
    int i = 1;
    int before = 0;
    while(i < n){
        int index = i;
        if(nums[i] > nums[i - 1]){
            before = 1;
            i++;
        }else if(nums[i] < nums[i - 1] && before == 1){
            i++;
        }else if(index == i){
            return false;
        }
    }
    if(before == 1){
        return true;
    }
    return false;
}