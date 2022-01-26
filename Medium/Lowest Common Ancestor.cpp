/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

Tree* getAnswer(Tree* root,int a,int b){
    if(root == NULL || root->val == a || root->val == b){
        return root;
    }
    Tree* l = getAnswer(root->left,a,b);
    Tree* r = getAnswer(root->right,a,b);
    if(l == NULL){
        return r;
    }
    if(r == NULL){
        return l;
    }
    return root;
}

int solve(Tree* root, int a, int b) {
    root = getAnswer(root,a,b);
    return root->val;
}


