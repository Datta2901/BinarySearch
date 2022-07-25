bool solve(string s) {
    int open = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            open++;
        }else{
            if(open < 1){
                return false;
            }
            open--;
        }
    }
    return open == 0;
}