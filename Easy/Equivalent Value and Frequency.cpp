bool solve(vector<int>& nums) {
    unordered_map<int,int>fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        if(it.first == it.second){
            return true;
        }
    }
    return false;
}