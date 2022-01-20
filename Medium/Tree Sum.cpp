/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int sum;
void getSum(Tree * root){
    if(root == NULL){
        return;
    }
    sum += root->val;
    getSum(root->left);
    getSum(root->right);
}

int solve(Tree* root) {
    sum = 0;
    getSum(root);
    return sum;
}