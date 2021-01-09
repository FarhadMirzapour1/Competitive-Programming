class Solution {
public:
    ListNode* removeElements(ListNode* first, int val) {
        auto head=first;
        if(!head) return head;
        while (first && first->val == val) {
            first=first->next;
        }
        while (head->next) {
            if (head->next->val==val) {
                head->next=head->next->next;
            }
            else {
                head=head->next;
            }
            
        }
        return first;
    }
};