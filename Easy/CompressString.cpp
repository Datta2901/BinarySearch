string solve(string s) {

    string ans = "";
    ans += s[0];
    for(int i = 1; i < s.size(); i++){
        if(ans[ans.size() - 1] != s[i]){
            ans += s[i];
        }
    }
    
    return ans;
    auto res = unique(s.begin(),s.end());
    return string(s.begin(),res);
}