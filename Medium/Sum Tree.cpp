/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool answer;
bool getAnswer(Tree* root){
    if(root == NULL){
        return false;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }

    if(root->left != NULL && root->right != NULL &&   
    root->val != root->right->val + root->left->val){
        answer = false;
        return false;
    }else if(root->left == NULL && root->right != NULL && 
    root->val != root->right->val){
        answer = false;
        return false;
    }else if(root->left != NULL && root->right == NULL && 
    root->val != root->left->val){
        answer = false;
        return false;
    }
    return getAnswer(root->left) && getAnswer(root->right);
}

bool solve(Tree* root) {
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    answer = true;
    getAnswer(root);
    return answer;
}