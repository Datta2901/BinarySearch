// int getAnswer(vector<int>&nums){
//     sort(nums.begin(),nums.end());
//     int answer = nums[0] + nums[1];
//     nums.push_back(answer);
//     nums.erase(nums.begin());
//     nums.erase(nums.begin());
//     return answer;
// }
// int solve(vector<int>& nums) {
//     if(nums.size() == 0){
//         return 0;
//     }
//     int answer = 0;
//     while(nums.size() != 1){
//         answer += getAnswer(nums);
//     }
//     return answer;
// }

int getAnswer(multiset<int>&n){
    int answer = *(n.begin());
    n.erase(n.begin());
    answer += *(n.begin());
    n.erase(n.begin());
    n.insert(answer);
    return answer;
}
int solve(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int answer = 0;
    multiset<int>n;
    for(auto it : nums){
        n.insert(it);
    }
    while(n.size() != 1){
        answer += getAnswer(n);
    }
    return answer;
}