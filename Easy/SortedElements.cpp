vector<vector<int>> solve(vector<int>& nums) {
    // sort(nums.begin(),nums.end());
    vector<int>answer;
    vector<vector<int>> a;
    if(nums.size() == 0){
        return a;
    }
    for(int i = 0; i < nums.size(); i++){
        if(i < nums.size() - 1 && nums[i] == nums[i + 1]){
            answer.push_back(nums[i]);
        }else{
            answer.push_back(nums[i]);
            a.push_back(answer);
            answer.clear();
        }
    }  
    return a;
}