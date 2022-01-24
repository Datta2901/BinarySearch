void bfs(vector<vector<int>>&matrix,int i,int j){
    queue<pair<int,int> > store;
    store.push({i,j});
    while(!store.empty()){
        int x = store.front().first;
        int y = store.front().second;
        store.pop();
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,-1,1};
        for(int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(newX < 0 || newY < 0 || newX >= matrix.size() || newY >= matrix[0].size() || matrix[newX][newY] != 1){
                continue;
            }
            matrix[newX][newY] = 2;
            store.push({newX,newY});
        }
    }
}

int solve(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int count = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 1){
                bfs(matrix,i,j);
                count++;
            }
        }
    } 
    return count;   
}