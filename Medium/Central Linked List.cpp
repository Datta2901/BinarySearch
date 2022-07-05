#include<bits/stdc++.h>
using namespace std;

class LLNode {
    public:
        int val;
        LLNode *next;
};
 

int solve(LLNode* node){
    LLNode* slow = node;
    LLNode* fast = node;
    while(fast != NULL && fast->next != NULL){    
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

int main(){

    return 0;
}