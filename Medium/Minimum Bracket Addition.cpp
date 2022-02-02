int solve(string s) {
    int open = 0;
    int answer = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            open++;
        }else{
            if(open <= 0){
                answer++;
            }else{
                open--;
            }
        }
    }
    answer += abs(open);
    return answer;
}