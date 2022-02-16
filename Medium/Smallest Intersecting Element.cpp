// int solve(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     if(m == 0){
//         return -1;
//     }
//     int n = matrix[0].size();
//     unordered_map<int,set<int>> mpp;
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             mpp[matrix[i][j]].insert(i);
//         }
//     }


//     int mini = INT_MAX;
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             if(mpp[matrix[i][j]].size() == m){
//                 mini = min(mini,matrix[i][j]);
//             }
//         }
//     }

//     if(mini == INT_MAX){
//         return -1;
//     }
//     return mini;
// }


int solve(vector<vector<int>>& matrix) {
    int m = matrix.size();
    if(m == 0){
        return -1;
    }
    int n = matrix[0].size();
    unordered_map<int,int> mpp;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || mpp[matrix[i][j]] == i){
                mpp[matrix[i][j]] = i + 1;
            }
        }
    }

    int mini = INT_MAX;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mpp[matrix[i][j]] == m){
                mini = min(mini,matrix[i][j]);
            }
        }
    }
    if(mini == INT_MAX){
        return -1;
    }
    return mini;
}