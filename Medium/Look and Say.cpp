string getAnswer(string ans){
    string result = "";
    if(ans.size() == 1){
        result += "1";
        result += ans;
        return result;
    }
    int count = 1;
    int prevc = 0;
    for(int i = 1; i < ans.size(); i++){
        if(ans[i] == ans[i - 1]){
            count++;
            prevc = i;
        }else{
            result += to_string(count);
            result += ans[prevc];
            count = 1;
            prevc = i;
        }
        // cout << count << " " << prevc << endl;
    }
    if(count > 0){
        result += to_string(count);
        result += ans[prevc];
    }

    return result;
}

string solve(int n) {
    string ans = to_string(1);
    for(int i = 0; i < n - 1; i++){
        ans = getAnswer(ans);
        cout << ans << endl;
    }   
    return ans;
}