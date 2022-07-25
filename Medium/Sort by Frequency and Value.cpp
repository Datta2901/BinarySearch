vector<int> solve(vector<int>& nums) {
    priority_queue<pair<int,int>>pq;
    vector<int>answer;
    map<int,int>fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        pq.push({it.second,it.first});
    }
    while(!pq.empty()){
        int f = pq.top().first;
        int n = pq.top().second;
        for(int i = 0; i < f; i++){
            answer.push_back(n);
        }
        pq.pop();
    }
    // reverse(answer.begin(),answer.end());
    return answer;
}