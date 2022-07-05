#include<bits/stdc++.h>
using namespace std;

class LLNode {
    public:
        int val;
        LLNode *next;
};
 

LLNode* solve(LLNode* node){
    LLNode* temp = node;
    LLNode* prev;
    int count = 1;
    while(temp){
        if(count % 2 == 1){
            prev = temp;
        }else{
            swap(prev->val,temp->val);
        }
        count++;
        temp = temp->next;
    }
    return node;
}

int main(){

    return 0;
}