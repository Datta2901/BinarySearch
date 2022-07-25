#include <stdio.h>

int main(int argc, char const*argv[]) {
    int *ptr;
    int num =  10;
    ptr = (int*) num;
    ptr++; 
    num = (int)ptr;
    printf("%d", num); 
    return 0;
}

bool solve(Tree* p, Tree* q) {
    if(!p && q){
        return false;
    }if(p && !q){
        return false;
    }
    if(p == NULL && q == NULL){
        return true;
    }if(p->val != q->val){
        return false;
    }
    return solve(p->left,q->left) && solve(p->right,q->right);

}