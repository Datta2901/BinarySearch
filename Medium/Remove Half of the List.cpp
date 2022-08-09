int solve(vector<int>& nums) {
    unordered_map<int,int>fre;
    int n = nums.size();
    priority_queue<pair<int,int>>pq;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        pq.push({it.second,it.first});
    }
    int count = 0;
    int ans = 0;
    while(!pq.empty()){
        int t = pq.top().first;
        pq.pop();
        count += t;
        ans++;
        if(count >= round(float(n) / 2)){
            return ans;
        }
    }
    return 0;
}