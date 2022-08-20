/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    LLNode* curr = node;
    LLNode* nn = node;
    LLNode* head = nn;
    LLNode* prev = NULL;
    while(curr != NULL){
        nn = nn->next;
        curr->next = prev;
        prev = curr;
        curr = nn;
    }
    head = prev;
    return head;
}