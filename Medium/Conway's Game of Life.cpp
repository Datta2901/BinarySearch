int m,n;
bool isValid(int i,int j){
    // cout << i << " " << j << " " << 1 << endl;;
    if(i < 0 || i >= m || j < 0 || j >= n){
        return false;
    }
    return true;
}


int countNeighbours(int i,int j,vector<vector<int> > &matrix){
    if(isValid(i,j)){
        if(matrix[i][j] == 1){
            // cout << 1 << endl;
            return 1;
        }
    }
    return 0;
}

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int getAnswer(int x,int y,vector<vector<int> > &matrix){
    int count = 0;
    for(int i = 0; i < 8; i++){
        int newx = x + dx[i];
        int newy = y + dy[i];
        // cout << newx << "  " << newy << endl;
        count += countNeighbours(newx,newy,matrix);
        // cout << count << " ";
    }
    // cout << endl;
    return count;
}

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    m = matrix.size();
    n = matrix[0].size();
    vector<vector<int> > answer(m,vector<int>(n,0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int count = getAnswer(i,j,matrix);
            // cout << i << " " << j << " " << count << " " << matrix[i][j]  << endl;
            if(matrix[i][j] == 0 && count == 3){
                answer[i][j] = 1;
            }else if(matrix[i][j] == 1 && (count ==  2 || count == 3)){
                answer[i][j] = 1;
            }
        }
    }
    return answer;
}