int solve(string s) {
    if(s.size() == 0){
        return 0;
    }
    int count = 1;
    int answer = 1;
    int n = s.size();
    char prev = s[0];
    for(int i = 1; i < n; i++){
        if(prev == s[i]){
            count++;
        }else{
            answer = max(answer,count);
            prev = s[i];
            count = 1;
        }
    }
    answer = max(answer,count);
    return answer;
}

int solve(string s) {
    int n = s.size(), c = 1, m = 0;
    char ch = 0;
    if (n < 1) return 0;
    if (n == 1) return 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == ch) {
            c++;
        } else {
            ch = s[i];
            c = 1;
        }
        m = max(c, m);
    }
    m = max(c, m);
    return m;
}