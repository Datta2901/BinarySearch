string solve(string s0, string s1) {
    int i = 0,j = 0;
    string answer = "";
    while(i < s0.size() || j < s1.size()){
        if(i < s0.size()){
            answer += s0[i];
        }
        if(j < s1.size()){  
            answer += s1[i];
        }
        i++;
        j++;
    }
    return answer;
}