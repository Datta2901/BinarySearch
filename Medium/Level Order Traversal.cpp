vector<int> solve(Tree* root) {
    vector<int>answer;
    queue<Tree*> store;
    store.push(root);
    store.push(NULL);
    while(!store.empty()){
        Tree* node = store.front();
        store.pop();
        if(node != NULL){
            answer.push_back(node->val);
            if(node->left){
                store.push(node->left);
            }
            if(node->right){
                store.push(node->right);
            }
        }else if(node == NULL && !store.empty()){
            store.push(NULL);
        }
    }
    return answer;
}