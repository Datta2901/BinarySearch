int solve(vector<int>& nums) {
    // Brute Force
    map<int,int>fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(auto it : fre){
        if(it.second == 2){
            return it.first;
        }
    }
    
    int n = nums.size();
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if(nums[abs(nums[i])] > 0){
            nums[abs(nums[i])] *= -1; 
        }else{
            return abs(nums[i]);
        }
    }

    // Using Tortoise method
    // Dectect cycle and then find the cycle
    int n = nums.size();
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(fast != slow);

    fast = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;


    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int real = ((n) * (n - 1)) / 2;
    return sum - real;
}