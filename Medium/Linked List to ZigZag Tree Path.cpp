/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
Tree* solve(LLNode* node) {
    Tree* root = NULL;
    Tree* answer = root;
    while(node != NULL){
        Tree* nn = new Tree();
        nn->val = node->val;
        if(root == NULL){
            root = nn;
            answer = root;
        }else if(root->val > node->val){
            root->left = nn;
            root = nn;
        }else if(root->val <= node->val){
            root->right = nn;
            root = nn;
        }
        node = node->next;
    }
    return answer;
}