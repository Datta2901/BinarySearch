int solve(string s) {
    int count = 0;
    int q = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            count--;
        }else if(s[i] == 'R'){
            count++;
        }else{
            q++;
        }
    }
    return abs(count) + q;
} 