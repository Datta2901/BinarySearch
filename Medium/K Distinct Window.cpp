vector<int> solve(vector<int>& nums, int k) {
    vector<int>answer;
    int i = 0,j = 0;
    unordered_map<int,int>fre;
    while(j < nums.size()){
        fre[nums[j]]++;
        if(j - i + 1 == k){
            answer.push_back(fre.size());
            if(fre[nums[i]] == 1){
                fre.erase(nums[i]);
            }else{
                fre[nums[i]]--;
            }
            i++;
        }
        j++;
    }
    return answer;
}