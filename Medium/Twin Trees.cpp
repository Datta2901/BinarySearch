/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

vector<int>i;
void inorder(Tree* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    i.push_back(root->val);
    inorder(root->right);
}

bool solve(Tree* root0, Tree* root1){
    vector<int>one,two;
    inorder(root0);
    one = i;
    i.clear();
    inorder(root1);
    two = i;
    i.clear();
    if(one.size() != two.size()){
        return false;
    }
    // for(auto it : one){
    //     cout << it << " ";
    // }
    // cout << endl;;
    // for(auto it : two){
    //     cout << it << " ";
    // }
    // cout << endl;
    for(int i = 0; i < one.size(); i++){
        if(one[i] != two[i]){
            return false;
        }
    }
    return true;
}

bool solve(Tree* p, Tree* q) {
    if(!p && q){
        return false;
    }if(p && !q){
        return false;
    }
    if(p == NULL && q == NULL){
        return true;
    }if(p->val != q->val){
        return false;
    }
    return solve(p->left,q->left) && solve(p->right,q->right);

}