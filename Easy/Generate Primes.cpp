vector<int> solve(int n) {
    vector<int>answer;
    for(int i = 2; i <= n; i++){
        int c = 0;
        for(int j = i - 1; j > 1; j--){
            if(i % j == 0){
                c = 1;
                break;
            }
        }
        if(c == 0){
            answer.push_back(i);
        }
    }    
    return answer;
}