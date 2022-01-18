int answer = 0;

void dfs(int source,vector<vector<int>> &adj,vector<bool>&visited,vector<int>&tin,vector<int>&low,int parent,int &time){
    tin[source] = time;
    low[source] = time;
    time++;
    visited[source] = true;
    for(auto it : adj[source]){
        if(parent == it){
            continue;
        }
        if(!visited[it]){
            dfs(it,adj,visited,tin,low,source,time);
            low[source] = min(low[it],low[source]);
            if(tin[source] < low[it]){
                answer++;
            }
        }else{
            low[source] = min(low[source],tin[it]);
        }
    }
}

int solve(vector<vector<int>>& graph) {
    answer = 0;
    int m = graph.size();
    // cout << m << endl;
    vector<bool>visited(m);
    vector<int>tin(m),low(m);
    int time = 0;
    for(int i = 0; i < m; i++){
        if(!visited[i]){
            dfs(i,graph,visited,tin,low,-1,time);
        }
    }
    return answer;
}