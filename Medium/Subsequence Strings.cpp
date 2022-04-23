bool solve(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    int i = 0,j = 0;
    while(i < m){
        if(s2[i] == s1[j]){
            // cout << i << " ";
            i++;
            j++;
        }else{
            i++;
        }
        if(j == n){
            break;
        }
    }
    // cout << j << endl;
    return j == n;
}