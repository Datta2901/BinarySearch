vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int m = matrix.size();
    if(m == 0){
        return matrix;
    }
    int n = matrix[0].size();
    for(int i = 0; i < m; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 1 - matrix[i][j];
        }
    }
    return matrix;
}