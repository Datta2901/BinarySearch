int solve(vector<vector<int>>& matrix) {
    if(matrix.size() == 0){
        return -1;
    }
    int m = matrix.size();
    int n = matrix[0].size();
    // cout << m << " " <<  n << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[j][i] == 1){
                return i;
            }
        }
        
    }
    return -1; 
}

int solve(vector<vector<int>>& matrix) {
    if(matrix.size() == 0){
        return -1;
    }
    int answer = INT_MAX;
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i = 0; i < m; i++){
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(matrix[i][mid] == 1){
                answer = min(answer,mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
    }
    if(answer == INT_MAX){
        return -1;
    }else{
        return answer;
    }
}