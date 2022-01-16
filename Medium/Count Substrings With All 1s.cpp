int solve(string s) {
    int n = s.size();
    int count = 0;
    int a = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            count += 1;
        }else{
            // cout << count << endl;
            a += (count * (count + 1)) / 2;
            count = 0;
        }
    } 
    a += (count * (count + 1)) / 2;

    return a;
}