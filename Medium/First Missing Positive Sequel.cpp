int solve(vector<int>& arr) {
    int answer = 1;
    for(int i = 0; i < arr.size(); i++){
        if(answer == arr[i]){
            answer++;
        }
    }
    return answer;
}