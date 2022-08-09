void fillVector(vector<string>&answer,string word,int n){
    for(int i = 0; i < n; i++){
        answer.push_back(word);
    }
}

vector<string> solve(vector<string>& strs) {
    int cr = 0,cg = 0;
    for(auto it : strs){
        if(it == "red"){
            cr++;
        }else if(it == "green"){
            cg++;
        }
    }
    vector<string>answer;
    fillVector(answer,"red",cr);
    fillVector(answer,"green",cg);
    fillVector(answer,"blue",strs.size() - cr - cg);
    return answer;    
}