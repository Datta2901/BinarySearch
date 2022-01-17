// Tc - O(n)
// SC - O(n)
bool solve(string s) {
    stack<int>store;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            store.push(s[i]);
        }else {
            if(!store.empty()){
                if(s[i] == '}' && store.top() == '{'){
                    store.pop();
                }
                else if(s[i] == ')' && store.top() == '('){
                    store.pop();
                }
                else if(s[i] == ']' && store.top() == '['){
                    store.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(store.empty()){
        return true;
    }
    return false;
}