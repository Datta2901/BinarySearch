int m,n;
// int lcs(string a,string b,int i,int j,vector<vector<int>>&dp){
//     if(i == m || j == n){
//         return dp[i][j] = 0;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }

//     if(a[i] == b[j]){
//         return dp[i][j] = 1 + lcs(a,b,i + 1,j + 1,dp);
//     }
//     return dp[i][j] =m ax(lcs(a,b,i,j + 1,dp),lcs(a,b,i + 1,j,dp));
// }

int LCS(string a,string b){
    int m = a.size(),n = b.size();
    int dp[m + 1][n + 1];
    for(int i = 0; i <= m; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= n; j++){
        dp[0][j] = 0;
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i - 1] == b[j - 1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }else{
                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

bool solve(string s, int k) {
    m = s.size();
    n = s.size();
    string rev = s;
    reverse(s.begin(),s.end());
    int l = LCS(s,rev);
    // cout << m - l << " "<< l << endl;
    return (m - l) <= k;
}