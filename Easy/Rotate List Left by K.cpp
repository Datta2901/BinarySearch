vector<int> solve(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>temp(n,0);
    for(int i = 0; i < n; i++){
        temp[i] = nums[abs(i + k) % n];
    }
    return temp;
}