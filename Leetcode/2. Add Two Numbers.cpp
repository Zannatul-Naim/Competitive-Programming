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
        
        ListNode* ans = new ListNode(0);
        ListNode* t;
        t = ans;

        int m = 0;

        while(l1 != NULL || l2 != NULL) {
            int x, y;
            if(l1) {
                x = l1->val;
                l1 = l1->next;
            }
            else x = 0;
            if(l2) {
                y = l2->val;
                l2 = l2->next;
            }
            else y = 0;

            t->next = new ListNode((x+y+m)%10);
            t = t->next;
            m = (x+y+m)/10;

        }
        if(m > 0) {
            t->next = new ListNode(m);
        }

        return ans->next;
    }
};
