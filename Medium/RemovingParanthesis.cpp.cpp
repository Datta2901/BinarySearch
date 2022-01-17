// tc - O(n)
// Sc - O(1)
int solve(string s) {
    int open = 0;
    int n = s.size();
    int answer = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            open++;
        }else{
            if(open == 0){
                answer +=1;
            }else if(open >= 1){
                open--;
            }else{
                answer += 1;
            }
        }
    }
    if(open > 0){
        answer += open;
    }
    return answer;
}