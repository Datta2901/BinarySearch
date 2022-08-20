string bin(int n){
    string ans = "";
    while(n > 0){
        ans += to_string(n % 2);
        n /= 2;
    }
    // reverse(ans.begin(),ans.end());
    // for(int i = ans.size(); i < 32; i++){
    //     ans += '0';
    // }
    return ans;
}

int solve(int x, int y) {
    string binX = bin(x);
    string binY = bin(y);
    // cout << binX << " " << binY << endl;
    // cout << binX.size() << " " << binY.size() << endl;
    if(binX.size() < binY.size()){
        swap(binX,binY);
    }
    for(int i = 0; i < binX.size() - binY.size() + 1; i++){
        binY.push_back('0');
    }
    cout << binX << " " << binY << endl;

    int count = 0;
    for(int i = 0; i < binX.size(); i++){
        if(binX[i] != binY[i]){
            count++;
        }
    }
    return count;
}



// int solve(int x, int y) {
//     int count = 0;
//     while (x != 0 or y != 0) {
//         if ((x % 2) != (y % 2)){
//             count++;
//         }
//         x /= 2;
//         y /= 2;
//     }
   
//     return count;
// }