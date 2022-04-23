bool solve(vector<int>& nums) {
    map<int,int> fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        if(it.second % 2 != 0){
            return false;
        }
    }
    return true;
    int answer = 0;
    for(int i = 0; i < nums.size(); i++){
        answer ^= nums[i];
    }
    return answer == 0;
}




bool solve(vector<int>& nums) {
    int a = 0;
    int b = 0;
    for(int i = 0; i < nums.size(); i++){
        a ^= nums[i];
        b ^= nums[i] + 1;
        a ^= num - 1;
    }
    if(a == 0 && b == 0){
        return true;
    }
    return  false;
}