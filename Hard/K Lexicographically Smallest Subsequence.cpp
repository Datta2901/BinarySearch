// vector<int> addVector(priority_queue<int>& small){
//     vector<int>answer;  
//     while(!small.empty()){
//         answer.push_back(small.top());
//         small.pop();
//     }
//     sort(answer.begin(),answer.end());
//     return answer;
// }

// vector<int> solve(vector<int>& nums, int k) {
//     int n = nums.size();
//     priority_queue<int>small;
//     // priority_queue<int,vector<int>,greater<int> > small;
//     // 1 2 0 9 2 3
//     // 1 2 3
//     // 2 2 3 
//     // 0 2 3 
//     small.push(nums[0]);
//     vector<vector<int> > answer;
//     for(int i = 1; i < nums.size(); i++){
//         if(small.empty() || (small.size() < k  && small.top() > nums[i])){
//             small.push(nums[i]);
//         }else if(small.top() > nums[i]){
//             small.pop();
//             small.push(nums[i]);
//         }else{
//             answer.push_back(addVector(small));
//         }
//     }
//     for(auto it : answer){
//         for(auto i : it){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     sort(answer.begin(),answer.end());  
//     vector<int>ls;
//     for(int i = 0; i < answer[0].size(); i++){
//         ls.push_back(answer[0][i]);
//     }  
//     return ls;
// }

vector<int> solve(vector<int>& nums, int k) {
    int n = nums.size();
    stack<int>store;
    vector<int>answer;
    if(k == 0){
        return answer;
    }
    for(int i = 0; i < n; i++){
        if(store.empty()){
            store.push(nums[i]);
        }else if(!store.empty() && nums[i] < store.top()){
            while(!store.empty() && nums[i] < store.top() && (n - i - 1) + store.size() >= k){
                store.pop();
                // if((n - i - 1) + store.size() >= k){
                //     store.pop();
                // }
            }
            store.push(nums[i]);
        }else{
            if(store.size() < k){
                store.push(nums[i]);
            }
        }
    }


    while(!store.empty()){
        answer.push_back(store.top());
        store.pop();
    }
    reverse(answer.begin(),answer.end());

    return answer;
}