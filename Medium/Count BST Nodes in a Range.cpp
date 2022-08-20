/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int c;

void inorder(Tree* root,int l,int h){
    if(root == NULL){
        return ;
    }
    inorder(root->left,l,h);
    if(l <= root->val && root->val <= h){
        c++;
    }
    inorder(root->right,l,h);
}

int solve(Tree* root, int lo, int hi) {
    c = 0;
    inorder(root,lo,hi);
    return c;
}