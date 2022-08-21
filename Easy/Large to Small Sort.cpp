vector<int> solve(vector<int>& nums) {
    int size = nums.size();
    sort(nums.begin(),nums.end());
    int i = 0,j = size - 1;
    vector<int>answer;
    while(i < j){
        answer.push_back(nums[j]);
        answer.push_back(nums[i]);
        i++;
        j--;
    }
    // cout << i << " ";
    if(size % 2 == 1){
        answer.push_back(nums[i]);
    }
    return answer;
}