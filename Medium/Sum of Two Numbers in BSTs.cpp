/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
// bool getAnswer(Tree* b,int target){
//     if(b == NULL){
//         return false;
//     }
//     if(b->val == target){
//         return true;
//     }
//     if(b->val > target){
//        return getAnswer(b->right,target);
//     }
//     if(b->val < target){
//         return getAnswer(b->left,target);
//     }
//     // return getAnswer(b->right,target) || getAnswer(b->left,target);
//     // return false;
// }

bool find1(Tree* b,int target){
    while(b != NULL){
        if(b->val == target){
            return true;
        }
        else if(b->val > target){
            b = b->left;
        }else{
            b = b->right;
        }
    }
    return false;
}

int ans;
void inorder(Tree*a,Tree* b,int target){
    if(a == NULL){
        return ;
    }
    inorder(a->left,b,target);
    // bool aa = getAnswer(b,target - a->val);
    bool aa = find1(b,target - a->val);
    if(aa){
        ans  = true;
    }
    inorder(a->right,b,target);
}

bool solve(Tree* a, Tree* b, int target) {
    ans = false;
    inorder(a,b,target);
    return ans;
}