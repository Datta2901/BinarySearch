// int solve(int n) {
//     return sqrt(n);
// }
int solve(int n) {
    int c;
    for(int i=0;i<n-1;i++){
        if((i*i)<=n && (i+1)*(i+1)>n){
            c=i;
            break;
        }
    }
    return c;
}