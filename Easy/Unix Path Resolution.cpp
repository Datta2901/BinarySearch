vector<string> solve(vector<string>& path) {
    vector<string>answer;
    for(int i = 0; i < path.size(); i++){
        if(path[i] == ".."){
            if(answer.size()){
                answer.pop_back();
            }  
        }else if(path[i] == "."){
            
        }else{
            answer.push_back(path[i]);
        }
    }
    return answer;
}