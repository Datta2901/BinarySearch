bool solve(int n) {
    int m = sqrt(n);
    if(m * m == n){
        return true;
    }
    return false;
}