/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int ans;
void levelOrder(Tree* root){
    queue<Tree*>store;
    store.push(root);
    ans = root->val;
    vector<int>level;
    store.push(NULL);
    while(!store.empty()){
        Tree* r = store.front();
        store.pop();
        if(r != NULL){
            level.push_back(r->val);
            if(r->left != NULL){
                store.push(r->left);
            }if(r->right != NULL){
                store.push(r->right);
            }
        }else if(r == NULL && !store.empty()){
            store.push(r);
            ans = level[0];
            level.clear();
        }
    }
    ans = level[0];
}

int solve(Tree* root) {
    ans = 0;
    levelOrder(root);
    return ans;
}