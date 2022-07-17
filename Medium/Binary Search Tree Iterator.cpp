/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class BSTIterator {
    public:
    vector<int>i;
    Tree* r;
    int count;
    void inorder(Tree* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        i.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(Tree* root) {
        r = root;
        count = 0;
        inorder(root);
    }   

    int next() {
        int v = i[count];
        count++;
        return v;
    }

    bool hasnext() {
        return count < i.size();
    }
};