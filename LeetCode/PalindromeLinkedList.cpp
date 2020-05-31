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
    ListNode* temp=NULL;
public:
    
   bool util(ListNode* head){
       if (!head){
           return true;
       }
        bool isPal=util(head->next) && (temp->val == head->val);
        temp=temp->next;
        return isPal;      
   } 
    bool isPalindrome(ListNode* head) {
        temp=head;
        return util(head);
    }
};