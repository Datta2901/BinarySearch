bool solve(string s) {
    int fre[26] = {0};
    for(int i = 0; i < s.size(); i++){
        fre[s[i] - 'a'] = fre[s[i] - 'a'] + 1;
    }
    for(int i = 0; i < 26; i++){
        // cout << fre[i] << " ";
        if(fre[i] > 1){
            return false;
        }
    }
    return true;
}