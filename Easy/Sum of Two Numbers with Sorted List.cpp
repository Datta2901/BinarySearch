// O(n2)
bool solve(vector<int>& nums, int k) {
    int n=nums.size();
    if(n<=1)
    return false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==k)
            {
                return true;
            }
        }
    }
    return false;
}


// O(nlong) - tc
// O(n) - sc
bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    map<int,int> fre;
    for(auto it : nums){
        fre[it]++;
    }
    for(int i = 0; i < n; i++){
        if(fre[k - nums[i]]){
            if(k - nums[i] == nums[i]){
                if(fre[nums[i]] >= 2){
                    return true;
                }
            }else{
                return true;
            }
        }
    }
    return false;
}


// O(nlogn) -tc
// O(1) - SC
bool binarySearch(vector<int>&nums,int target){
    // cout << "Binary Search : " << " "  << endl;
    int low = 0; 
    int high = nums.size() - 1;
    while(low <= high){
        int mid =  (low + high) / 2;
        // cout << low << " " <<  mid << " " << high << " " << nums[mid] << " " << target << endl; 
        if(nums[mid] == target){
            // cout << "Got" << " " << target << endl;
            return true;
        }else if(nums[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << endl;
    return false;
    // return binary_search(nums.begin(),nums.end(),target);
}

bool func(vector<int>&nums,int target){
    return binarySearch(nums,target);
}

bool Exist(vector<int>&nums,int target,int i){
    int n = nums.size();
    if(func(nums,target)){
        if(target == nums[i]){
            if(i + 1 < n && nums[i] == nums[i + 1]){
                return true;
            }  
        }else{
            return true;
        }  
    }
    return false;
}


bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        // nums = [-1, 3, -5, 8]
        // k = -6
        // nums = [1, 3, 5, 8]
        // k = 6
        if((nums[i] >= 0 && k >= 0) || (nums[i] <= 0 && k <= 0) || (nums[i] <= 0 && k >= 0)){
            // cout << nums[i] << " " << k - nums[i] << " " <<binarySearch(nums,k - nums[i]) <<  endl;
            if(Exist(nums,k - nums[i],i)){
                // cout << "Target : " << k - nums[i] << " ";
                return true;
            }
        }else{
            if(Exist(nums,k + nums[i],i)){
                return true;
            }
        }
    }
            
    return false;
}


// O(n) - Tc
// O(1) - sc
// Two pointers
bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    int i = 0,j = n - 1;
    while(i < j){
        if(nums[i] + nums[j] == k){
            return true;
        }else if(nums[i] + nums[j] > k){
            j--;
        }else{
            i++;
        }
    }
    return false;
}