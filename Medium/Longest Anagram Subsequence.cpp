int solve(string a, string b) {
    unordered_map<int,int>fre;
    for(auto it : a){
        fre[it]++;
    }
    int count = 0;
    for(auto i : b){
        if(fre[i] > 0){
            count++;
            fre[i]--;
        }
    }
    return count;
}