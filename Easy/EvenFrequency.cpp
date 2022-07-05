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
}




bool solve(vector<int>& nums) {
    int a = 0;
    int b = 0,c = 0;
    for(int i = 0; i < nums.size(); i++){
        a ^= nums[i];
        b ^= nums[i] + 1;
        c ^= num - 1;
    }
    if(a == 0 && b == 0 && c == 0){
        return true;
    }
    return  false;
}