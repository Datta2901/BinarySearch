vector<int> solve(vector<int>& nums) {
    // vector<int> answer;
    int n = nums.size();
    int carry = 0;
    int sum = 1;
    bool c = false;
    for(int i = n - 1; i >= 0; i--){
        if(i == n - 1){
            nums[i] += 1;
        }
        sum = nums[i] + carry;
        // cout << sum << " " << carry << endl;
        if(sum > 9){
            int dig = log10(sum);
            int one = pow(10,dig);
            nums[i] = sum % one;
            carry = sum / one;
            // cout << sum << " " <<  one << " " << nums[i] << " " << carry << " " << endl;
            c = true;
        }else{
            nums[i] = sum;
            carry = 0;
            c = false;
        }
    }
    if(carry >= 0 && c){
        // answer.push_back(carry);
        nums.insert(nums.begin(),carry);
    }

    // for(auto it : nums){
    //     answer.push_back(it);
    // }

    return nums;
}