/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int maxi;
void getAnswer(Tree* root,int sum){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        maxi = max(maxi,(sum + root->val));
    }
    getAnswer(root->left,(sum  + root->val));
    getAnswer(root->right,(sum + root->val));
}

int solve(Tree* root) {
    maxi = 0;
    getAnswer(root,0);
    return maxi;
}