// From back to front
int Lcs(int i,int j,int k,string a,string b,string c,vector<vector<vector<int> > > &dp){
    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }
    if(i == 0 || j == 0 || k == 0){
        return dp[i][j][k] = 0;
    }
    if(a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1]){
        return dp[i][j][k] = 1 + Lcs(i - 1, j - 1, k - 1 ,a,b,c,dp);
    }
    return dp[i][j][k] = max({Lcs(i,j - 1,k,a,b,c,dp),Lcs(i - 1,j,k,a,b,c,dp),Lcs(i,j,k -1,a,b,c,dp)});
}

int solve(string a, string b, string c) {
    int m = a.size();
    int n = b.size();
    int o = c.size();
    if(m == 0 && n == 0 && o == 0){
        return 0;
    }
    vector<vector<vector<int> > > dp(m + 1,vector<vector<int> >(n + 1,vector<int>(o + 1,-1)));
    return Lcs(m,n,o,a,b,c,dp);
}


// From front to back
int m;
int n;
int o; 
int Lcs(int i,int j,int k,string a,string b,string c,vector<vector<vector<int> > > &dp){
    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }
    if(i == m || j == n || k == o){
        return dp[i][j][k] = 0;
    }
    if(a[i] == b[j] && b[j] == c[k]){
        return dp[i][j][k] = 1 + Lcs(i + 1, j + 1, k + 1 ,a,b,c,dp);
    }
    return dp[i][j][k] = max({Lcs(i + 1,j,k,a,b,c,dp),Lcs(i,j + 1,k,a,b,c,dp),Lcs(i,j,k  + 1,a,b,c,dp)});
}

int solve(string a, string b, string c) {
    m = a.size();
    n = b.size();
    o = c.size();
    if(m == 0 && n == 0 && o == 0){
        return 0;
    }
    vector<vector<vector<int> > > dp(m + 1,vector<vector<int> >(n + 1,vector<int>(o + 1,-1)));
    return Lcs(0,0,0,a,b,c,dp);
}