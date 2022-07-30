/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    int mini = head->val;
    if(head->next == NULL){
        return true;
    }
    head = head->next;
    while(head != NULL){
        if(mini >= head->val){
            return false;
        }
        mini = head->val;
        head = head->next;
    }
    return true;
}