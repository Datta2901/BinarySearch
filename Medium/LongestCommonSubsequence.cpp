int m,n;
int getAnswer(string a,string b,int i,int j,vector<vector<int> > &dp){
    if(i == m || j == n){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(a[i] == b[j]){
        return dp[i][j] =  1 + getAnswer(a,b,i + 1,j + 1,dp);
    }
    return dp[i][j] = max(getAnswer(a,b,i + 1,j,dp),getAnswer(a,b,i,j + 1,dp));
}
int longestCommonSubsequence(string a,string b){
    m = a.size();
    n = b.size();
    vector<vector<int> > dp(m,vector<int>(n,-1));
    return getAnswer(a,b,0,0,dp);
}


int solve(string a, string b) {
    return longestCommonSubsequence(a,b);
}