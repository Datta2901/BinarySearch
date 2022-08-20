vector<int> solve(vector<int>& nums) {
    vector<int>answer;
    int i = 0,j = 1;
    bool odd = false;
    int count = 0,c = 0;
    while(i < nums.size()){
        if(i % 2 == 0 && i + 2 < nums.size() && count % 2 == 0){
            swap(nums[i],nums[i + 2]);
        }else if(i % 2 == 1){
            count++;
        }
        if(i % 2 == 1  && i + 2 < nums.size() && c % 2 == 1){
            swap(nums[i],nums[i + 2]);
        }else if(i % 2 == 0){
            c++;
        }
        i++;
    }
    return nums;
}