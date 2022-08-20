bool solve(vector<vector<int>>& votes) {
    unordered_map<int,int>mpp;
    for(auto it : votes){
        if(mpp[it[1]] == 0){
            mpp[it[1]] = 1;
        }else{
           return true;
        }
    }
    return false;
}