/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int ans;
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