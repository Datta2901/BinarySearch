/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int answer = false;
bool control = false;
int height(Tree* root){
    if(root == NULL){
        return 0;
    }
    int l = height(root->left);
    int r =  height(root->right);
    if(abs(l - r) == 0 || abs(l - r) == 1){
        answer = true;
    }else{
        answer = false;
        return INT_MIN;
    }
    return 1 + max(height(root->left),height(root->right));
}

bool solve(Tree* root) {
    answer = false;
    if(root == NULL){
        answer =  true;
    }
    int h = height(root);
    return answer;
}

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int answer = false;
int height(Tree* root){
    if(root == NULL){
        return 0;
    }
    int l = height(root->left);
    int r =  height(root->right);
    // cout << l << " " << r << endl;
    if(abs(l - r) >= 2){
        answer = true;
    }
    return 1 + max(l,r);
}

bool solve(Tree* root) {
    answer = false;
    if(root == NULL){
       return true;
    }
    int h = height(root);
    if(answer == true){
        return false;
    }
    return true;
}