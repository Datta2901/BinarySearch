/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */


Tree* getAnswer(Tree* node0,Tree* node1){
    if(node0 == NULL && node1 == NULL){
        return NULL;
    }
    if(node0 != NULL && node1 == NULL)
    {
        return node0;
    }
    if(node0 == NULL && node1 != NULL){
        return node1;
    }
    Tree* root = new Tree();
    root->val = node0->val + node1->val;
    root->left = getAnswer(node0->left,node1->left);
    root->right = getAnswer(node0->right,node1->right);
    return root;
}

Tree* solve(Tree* node0, Tree* node1) {
    return getAnswer(node0,node1);
}