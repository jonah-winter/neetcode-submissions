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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cnt{0};
        ListNode* l3 = new ListNode();
        ListNode* dummy = new ListNode(0, l3);
        int curr{0};
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 && l2) {
                curr = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if (l1) {
                curr = l1->val;
                l1 = l1->next;
            }
            else if (l2) {
                curr = l2->val;
                l2 = l2->next;
            }
            if (cnt > 0) {
                curr++;
                --cnt;
            }
            if (curr > 9) {
                curr -= 10;
                cnt++;
            }
            l3->next = new ListNode(curr);
            l3 = l3->next;
        }
        while (cnt > 0) {
            l3->next = new ListNode(1);
            --cnt;
        }
        return dummy->next->next;
    }
};
