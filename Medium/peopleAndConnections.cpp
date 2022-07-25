#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> nums(n,vector<int>(3,0));
    map<int,int>mp;
    int mini = INT_MAX,maxi = INT_MIN;
    int minI = 0,maxI = 0;
    for(int i = 0; i < m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        mp[a] += c;
        mp[b] -= c; 
        if(maxi < mp[a]){
            maxi = mp[a];
            maxI = a;
        }
        if(mini > mp[b]){
            mini = mp[b];
            minI = b;
        }
    }
    cout << maxI << " " << minI << endl;
    return 0;
}