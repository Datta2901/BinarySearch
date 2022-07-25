/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int>ii;
void inorder(Tree* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    ii.push_back(root->val);
    inorder(root->right);
}

bool solve(Tree* root) {
    ii.clear();
    inorder(root);
    vector<int>re = ii;
    reverse(re.begin(),re.end());
    return re == ii;
}