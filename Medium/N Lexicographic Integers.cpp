bool cmp(string &a,string &b){
    return a < b;
}

vector<int> solve(int n) {
    vector<string>a;
    for(int i = 1; i <= n; i++){
        a.push_back(to_string(i));
    }

    sort(a.begin(),a.end(),cmp);
    vector<int>answer;
    for(int i = 0; i < n; i++){
        answer.push_back(stoi(a[i]));
    }

    return answer;
}