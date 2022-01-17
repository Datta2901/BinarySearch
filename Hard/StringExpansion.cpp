//tc - O(n)
//Sc - O(n)
string getAnswer(string a,int t){
    string answer = "";
    for(int i = 0; i < t; i++){
        answer += a;
    }
    return answer;
}

string solve(string s) {
    int n = s.size(); 
    stack<int>numbers;
    stack<string>words;
    int num = 0;
    string part = "";
    for(int i = 0; i < n; i++){
        char a = s[i];
        if(isdigit(a)){
            num = num * 10 + (a - '0');
        }else if(isalpha(a)){
            part += a;
        }else if(a == '('){
            words.push(part);
            numbers.push(num);
            part = "";
            num = 0;
        }else{
            int mult = numbers.top();
            numbers.pop();
            string tt = words.top();
            words.pop();
            tt += getAnswer(part,mult);
            part = tt;
        }
    }
    return part;
}