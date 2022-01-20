/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool getAnswer(Tree* root,int val){
    if(root == NULL){
        return false;
    }
    if(root->val == val){
        return true;
    }
    if(root->val < val){
        return getAnswer(root->right,val);
    }else{
        return getAnswer(root->left,val);
    }
}

bool solve(Tree* root, int val) {
    return getAnswer(root,val);
}