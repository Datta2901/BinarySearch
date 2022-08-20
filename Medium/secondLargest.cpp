#include<bits/stdc++.h>
using namespace std;

int getSecondMax(vector<int>&nums){
    int size = nums.size();
    int maxi = INT_MIN;
    int secondMaxi = INT_MIN;
    for(int i = 0; i < size; i++){
        if(nums[i] > maxi){
            secondMaxi = maxi;
            maxi = nums[i];
        }
        if(nums[i] != maxi && secondMaxi < nums[i]){
            secondMaxi = nums[i];
        }
    }
    return secondMaxi;
}

int main(){
    int size; 
    cin >> size;
    vector<int>nums;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout << getSecondMax(nums) << endl;
}