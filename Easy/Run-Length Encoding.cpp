string solve(string s) {
    int count = 1;
    string answer = "";
    int n = s.size();
    for(int i = 1; i < n; i++){
        if(s[i - 1] == s[i]){
            count++;
        }else{
            answer += to_string(count);
            answer += s[i - 1];
            count = 1;
        }
    }
    answer += to_string(count);
    answer += s[n - 1];
    return answer;
}   