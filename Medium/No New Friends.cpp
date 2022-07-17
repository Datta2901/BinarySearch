bool solve(int n, vector<vector<int>>& friends) {
    vector<int>adj[n + 1];
    for(auto it : friends){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    for(int i = 0; i < n; i++){
        if(adj[i].size() == 0){
            return false;
        }
    }
    return true;
}

bool solve(int n, vector<vector<int>>& friends) {
    bool mpp[n] = {false}; 
    for(auto it : friends){
        mpp[it[0]] = true;
        mpp[it[1]] = true;
    }
    for(int i = 0; i < n; i++){
        if(!mpp[i]){
            return false;
        }
    }  
    return true;
}