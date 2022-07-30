/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int ans;

void levelOrder(Tree* root){
    queue<Tree*>store;
    store.push(root);
    vector<int>level;
    store.push(NULL);
    while(!store.empty()){
        Tree* r = store.front();
        store.pop();
        if(r != NULL){
            level.push_back(r->val);
            if(r->left != NULL){
                store.push(r->left);
            }if(r->right != NULL){
                store.push(r->right);
            }
        }else if(r == NULL && !store.empty()){
            store.push(r);
            level.clear();
        }
    }
    // ans = level[0];
    for(auto it : level){
        ans += it;
    }
}

string s;
void inorder(Tree* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    s += to_string(root->val);
    s += " ";
    inorder(root->right); 
}

void preorder(Tree* root){
    if(root == NULL){
        return;
    }
    s += to_string(root->val);
    s += " ";
    preorder(root->left);
    preorder(root->right); 
}

void postorder(Tree* root){
    if(root == NULL){
        return;
    }
    
    preorder(root->left);
    preorder(root->right);
    s += to_string(root->val);
    s += " "; 
}

void printstring(string s){
    for(char c : s){
        cout << c;
    }
    cout << endl;
}
int solve(Tree* root) {
    // if(root == NULL){
    //     return 0;
    // }
    // ans = 0;
    // levelOrder(root);
    // return ans;
    s = "";
    inorder(root);
    cout << "Inorder : ";
    printstring(s);
    cout << "Postorder : ";
    s = "";
    postorder(root);
    printstring(s);
    cout << "preorder : ";
    s = "";
    preorder(root);
    printstring(s);

    return 0;
}