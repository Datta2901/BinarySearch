// unordered_map<int,string>store;
vector<string> store = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string>answer;

void getAnswer(string &digits,int i,string &comb){
    if(i == digits.size()){
        answer.push_back(comb);
        return;
    }
    for(auto &ch : store[digits[i] - '0']){
        comb.push_back(ch);
        getAnswer(digits,i + 1,comb);
        comb.pop_back();
    }
}
vector<string> solve(string digits) {
    answer.clear();
    if(digits.size() == 0){
        return {};
    }
    // store[2] = "abc";
    // store[3] = "def";
    // store[4] = "ghi";
    // store[5] = "jkl";
    // store[6] = "mno";
    // store[7] = "pqrs";
    // store[8] = "tuv";
    // store[9] = "wxyz";

    string comb = "";
    getAnswer(digits,0,comb);
    
    return answer;
}