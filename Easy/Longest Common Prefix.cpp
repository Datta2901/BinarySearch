string solve(vector<string>& words) {
    int j = 0;
    string answer = "";
    sort(words.begin(),words.end());
    // cout << words[0].size() << endl;
    for(int i = 0; i < words[0].size(); i++){
        char prev = words[0][j];
        int count = 1; 
        for(int k = 1; k < words.size(); k++){
            if(prev == words[k][j]){
                count++;
            }
        }
        if(count == words.size()){
            answer += prev;
        // cout << prev << " " << count << endl;
        }else{
            return answer;
        }
        j++;
    }
    return answer;
}