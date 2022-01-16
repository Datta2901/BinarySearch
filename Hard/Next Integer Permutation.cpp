// int solve(int n) {
//     vector<int>digits;
//     while(n > 0){
//         digits.push_back(n % 10);
//         n /= 10;
//     }
//     reverse(digits.begin(),digits.end());
//     next_permutation(digits.begin(),digits.end());
//     int answer = 0;
//     int m = digits.size();
//     for(int i = 0; i < m; i++){
//         answer = answer * 10  + digits[i];
//     }
//     return answer;
// }

int solve(int n) {
    string s=to_string(n);
    next_permutation(s.begin(),s.end());
    return stoi(s);
}