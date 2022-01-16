int solve(string s) {
    int n = s.size();
    bool ok = true;
    int sum = 0;
    int num = 0;
    for(int i = 0; i < n; i++){
        if(isdigit(s[i])){
            num = num * 10 + s[i] - '0';
        }else{
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}