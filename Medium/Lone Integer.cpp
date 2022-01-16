int solve(vector<int>& nums) {
    map<int,int>fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}