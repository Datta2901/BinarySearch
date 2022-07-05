// https://binarysearch.com/problems/Leaves-in-Same-Level

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int leafs;
int height(Tree* root){
    if(root == NULL){
        return 0;
    }
    int hl = height(root->left);
    int hr = height(root->right);
    if(hl > 0 && hr > 0 && hr != hl){
        leafs = 0;
    }
    return 1 + max(hl,hr);
}

bool solve(Tree* root) {
    leafs = 1;
    if(root == NULL){
        return 0;
    }
    height(root);
    return leafs;
}


// BFS or level order traversal
bool solve(Tree* root) {
    queue<Tree*> store;
    store.push(root);
    while(!store.empty()){
        int size = store.size();
        bool leaf = false;
        while(size--){
            Tree* f = store.front();
            store.pop();
            if(f != NULL){
                if(f->left){
                    store.push(f->left);
                }
                if(f->right){
                    store.push(f->right);
                }
                if(f->left == NULL && f->right == NULL){
                    leaf = true;
                }
            }
        }
        if(leaf && !store.empty()){
            return false;
        }
    }
    return true;
}