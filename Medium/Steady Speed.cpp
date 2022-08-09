int solve(vector<int>& positions) {
    int n = positions.size();
    vector<int>diff(n,0);
    for(int i = 1; i < n; i++){
        diff[i] = abs(positions[i] - positions[i - 1]);
        // cout << diff[i] << " ";
    }
    // int i = 0,j = 0;
    int answer = 0,count = 1;
    for(int i = 1; i < n; i++){
        if(diff[i] == diff[i - 1]){
            count++;
        }else{
            answer = max(count,answer);
            count = 1;
        }
    }
    answer = max(count,answer);
    if(answer == n){
        return n;
    }
    return answer + 1;
}