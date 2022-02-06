vector<vector<int>> solve(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(),intervals.end());
    int start = intervals[0][0];
    int end = intervals[0][1];
    vector<vector<int> > answer;
    for(int i = 1; i < n; i++){
        if(start <= intervals[i][0] && intervals[i][0] <= end){
            if(intervals[i][1] >= end){
                end = intervals[i][1];
            }
        }else{
            answer.push_back({start,end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    answer.push_back({start,end});
    return answer;
}