string solve(string s) {
    int size = s.size();
    string ans  = "";
    if(size == 0){
        return ans;
    }
    ans += s[0];
    for(int i = 1; i < size; i++){
        if(s[i] != s[i - 1]){
            ans += s[i];
        }
    }
    return ans;
}