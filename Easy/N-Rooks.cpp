int fact(int n){
    long long int product = 1;
    while(n > 0){
        product *= n;
        n--;
    }
    return product;
}
int solve(int n) {
    return fact(n);
}