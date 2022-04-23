#include<bits/stdc++.h>
using namespace std;

// Recursion
int getAnswer(int length,int i,int n){
    if(i < 0 || i >= length){
        return 0;
    }
    if(i == 0 && n == 0){
        return 1;
    }
    if(n <= 0 && i != 0){
        return 0;
    }
    int right = getAnswer(length,i + 1,n - 1);
    int zero = getAnswer(length,i,n - 1);
    int left = getAnswer(length,i - 1,n - 1);
    return (left + zero + right);
}

int solve(int length, int n) {
    return getAnswer(length,0,n);
}

// Memoization
int mod = 1e9 + 7;
int dp[10001][501];
int getAnswer(int length,int i,int n){
    if(i < 0 || i >= length){
        return 0;
    }
    if(i == 0 && n == 0){
        return 1;
    }
    if(n <= 0 && i != 0){
        return 0;
    }
    if(dp[i][n] != -1){
        return dp[i][n];
    }
    int right = getAnswer(length,i + 1,n - 1);
    int zero = getAnswer(length,i,n - 1);
    int left = getAnswer(length,i - 1,n - 1);
    return dp[i][n] = ((left + zero) % mod + right) % mod;
}

int solve(int length, int n) {
    // for(int i = 0; i < 10001; i++){
    //     for(int j = 0; j < 501; j++){
    //         dp[i][j] = -1;
    //     }
    // }
    memset(dp,-1,sizeof(dp));
    return getAnswer(length,0,n) % mod;
}

int main(){
    int length,n;
    cin >> length >> n;
    cout << solve(length,n) << endl;
    return 0;
}