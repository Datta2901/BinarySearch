//  * class Tree {
//  *     public:
//  *         int val;
//  *         Tree *left;
//  *         Tree *right;
//  * };
//  */

vector<int>answer;
void inorder(Tree* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    answer.push_back(root->val);
    inorder(root->right);
}

int count1 = 0;
Tree* a;
int i = 0;
void Inorder(Tree* root,vector<int>&answer){
    if(count1 == 0){
        a = root;
        count1++;
    }
    if(root == NULL){
        return;
    }
    Inorder(root->left,answer);
    // if(root->val == val1){
    //     root->val = val2;
    // }else if(root->val == val2){
    //     root->val = val1;
    // }
    root->val = answer[i];
    i++;
    Inorder(root->right,answer);
}

Tree* solve(Tree* root) {
    answer.clear();
    count1 = 0;
    i = 0;
    a = NULL;
    inorder(root);
    int size = answer.size(); 
    // 1 2 0
    vector<int>sorted = answer;
    sort(sorted.begin(),sorted.end());
    // for(int i = 0; i < size; i++){
    //     if(answer[i] != sorted[i]){
    //         answer[]
    //     }
    // }
    // cout << val2 << endl;
    Inorder(root,sorted);
    return a;
}