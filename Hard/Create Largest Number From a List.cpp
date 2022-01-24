bool cmp(int &a,int &b){
    string a1 = to_string(a);
    string a2 = to_string(b);
    return a1 + a2 > a2 + a1;
}

string solve(vector<int>& nums) {
    sort(nums.begin(),nums.end(),cmp);
    string ans = "";
    for(auto it : nums){
        ans += (to_string(it));
    }
    return ans;
}