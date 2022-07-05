/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

Tree* answer;
int getAnswer(Tree* root){
    if(root == NULL){
        return 0;
    }
    return root->val = root->val + getAnswer(root->left) + getAnswer(root->right);
}

Tree* solve(Tree* root) {
    answer = root;
    answer->val =  getAnswer(root);
    return answer;
}