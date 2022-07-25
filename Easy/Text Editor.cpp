string solve(string s) {
    stack<char> a;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '<' && i < s.size() + 1 && s[i + 1] == '-'){
            if(!a.empty())
                a.pop();
            i++;
        }else{
            a.push(s[i]);
        }
    }
    string answer = "";
    while(!a.empty()){
        answer += a.top();
        a.pop();
    }
    reverse(answer.begin(),answer.end());
    return answer;
}