bool solve(vector<int>& nums) {
    int count = 0;
    if(nums.size() == 1){
        if(nums[0] == 1)
        return true;
    }
    int one = 0;
    int n = nums.size();
    int answer = INT_MIN;
    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            count++;
            
        }else if(nums[i] == 1){
            count++;
        }else{
            if(count != 0){
                if(one == 0){
                    answer = count;
                    one++;
                }
            }
        }
    // cout << answer << " " << count << endl;

        if(i == n -1 && answer == INT_MIN){
            answer = count; 
        }
    }
    if(answer != count){
        return false;
    }

    return true;
}