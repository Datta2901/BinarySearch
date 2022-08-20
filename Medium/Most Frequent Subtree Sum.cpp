/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

unordered_map<int,int>fre;
int subTreeSum(Tree* root){
    if(root == NULL){
        return 0;
    }
    int sum = root->val + subTreeSum(root->left) + subTreeSum(root->right);
    fre[sum]++;
    return sum;
}

int solve(Tree* root) {
    fre.clear();
    subTreeSum(root);
    int maxi = INT_MIN;
    int answer = 0;
    for(auto it : fre){
        // cout << it.first << " " << it.second << endl;
        if(maxi < it.second){
            answer = it.first;
            maxi = it.second;
        }
    }
    return answer;
}