/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> s;
        auto temp= head;
        while (temp) {
            s.push(temp->val);
            temp=temp->next;
        }
        while (!s.empty()) {
            if (s.top()!=head->val) return false;
            s.pop();
            head=head->next;
        }
        return true;
    }
};