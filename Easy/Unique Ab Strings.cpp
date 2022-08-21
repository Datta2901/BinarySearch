int solve(string s) {
    int count = 0;
    for(auto i : s){
        if(i == 'a'){
            count++;
        }
    }
    int two = pow(2,count);
    return two;
}