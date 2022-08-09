int solve(string s) {
    int n = s.size();
    int i = n - 1;
    int poww = 1;
    int sum = 0;
    while(i >= 0){
        sum = sum + poww * (s[i] - '0');
        poww *= 3;
        i--;
    }
    return sum;
}
