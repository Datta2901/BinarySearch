int solve(vector<string>& words) {
    int size = words.size();
    int count = 1;
    int answer = 0;
    if(size == 0){
        return 0;
    }
    for(int i = 1; i < size; i++){
        if(words[i][0] == words[i - 1][0]){
            count++;
        }else{
            answer = max(answer,count);
            count = 1;
        }
    }
    answer = max(answer,count);

    return answer;
}