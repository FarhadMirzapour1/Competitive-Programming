/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode*> q;
        while (head) {
            if (q.find(head)!=q.end()) return true;
            q.insert(head);
            head=head->next;
        }
        return false;
    }
};