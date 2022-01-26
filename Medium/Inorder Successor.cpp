// /**
//  * class Tree {
//  *     public:
//  *         int val;
//  *         Tree *left;
//  *         Tree *right;
//  * };
//  */

// Brute Force
vector<int>answer;
void inorder(Tree* root){
    if(root != NULL){
        inorder(root->left);
        answer.push_back(root->val);
        inorder(root->right);
    }
}

int solve(Tree* root, int t){
    answer.clear();
    inorder(root);
    int n = answer.size();
    // for(auto it : answer){
    //     cout << it << " ";
    // }
    for(int i = 0; i < n; i++){
        if(t == answer[i]){
            if(i + 1 < n){
                return answer[i + 1];
            }else{
                return 0;
            }
        }
    }
    return 0;
}

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

// Recursive
int ans;
void inorder(Tree* root,int t){
    if(root != NULL){
        inorder(root->left,t);
        if(t < root->val && ans > root->val){
            ans =  root->val;
        }
        inorder(root->right,t);
    }
}

int solve(Tree* root, int t){
    ans = INT_MAX;
    inorder(root,t);
    return ans;
}


int solve(Tree* root, int t){
    int ans = 0;
    while(root != NULL){
        if(root->val <= t){
            root = root->right;
        }else{
            ans = root->val;
            root = root->left;
        }
    }
    return ans;
}
