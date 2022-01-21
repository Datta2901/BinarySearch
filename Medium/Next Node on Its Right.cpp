/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */


Tree* solve(Tree* tree, int target) {
    queue<Tree*>store;
    store.push(tree);
    store.push(NULL);
    vector<Tree*>level;
    int next = false;
    while(!store.empty()){
        Tree* node = store.front();
        store.pop();
        if(node){
            if(node->val == target){
                next = true;
            }
            level.push_back(node);
            if(node->left){
                store.push(node->left);
            }if(node->right){
                store.push(node->right);
            }
        }else if(node == NULL && !store.empty()){
            store.push(NULL);
            if(next){
                for(auto it : level){
                    if(it->val == target){
                        next = false;
                    }else if(!next){
                        return it;
                    }
                }
            }
            level.clear();
        }
    }

    if(next){
        for(auto it : level){
            if(it->val == target){
                next = false;
            }else if(!next){
                return it;
            }
        }
    }

    return NULL;
}