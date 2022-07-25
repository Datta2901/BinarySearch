int solve(vector<vector<int>>& intervals, int point) {
    int count = 0;
    for(int i = 0; i < intervals.size(); i++){
        if(intervals[i][0] <= point && point <= intervals[i][1]){
            count++;
        }
    }
    return count;
}