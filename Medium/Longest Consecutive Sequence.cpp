// int solve(vector<int>& nums) {
//     int answer = 0;

//     unordered_map<int,int>fre;
//     for(auto it : nums){
//         fre[it] = 1;
//     }
    
//     for(auto it : nums){
//         int current = it;
//         if(fre[current - 1] == 0){
//             int count  = 0;
//             while(fre[current] == 1){
//                 count++;
//                 current++;
//             }
//             answer = max(answer,count);
//         }
//     }
//     return answer;
// }

int solve(vector<int>& nums) {
    int n =nums.size();
    int answer = 1;
    int count;
    if(n == 0){
        return 0;
    }
    unordered_map<int,int> fre;
    for(int i = 0; i < n; i++){
        fre[nums[i]] = 1;
    }
    for(int i = 0; i < n; i++){
        if(fre[nums[i] - 1] == 0){
            count = 1;
            int current = nums[i];
            while(fre[current + 1] != 0){
                current++;
                count++;
            }
            answer = max(answer,count);
        }
    }
    return answer;
}