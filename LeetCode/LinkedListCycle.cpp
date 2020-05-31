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
        ListNode* tort=head;
        ListNode* hare=head;
        while(tort!=NULL && hare!=NULL && hare->next!=NULL){
            tort=tort->next;
            hare=hare->next->next;
            if (hare!=NULL && tort!=NULL && tort==hare){
                return true;
            }
        }
        return false;
    }
};