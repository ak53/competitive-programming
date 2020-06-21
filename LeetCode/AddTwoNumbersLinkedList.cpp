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
        ListNode* ans=NULL;
        ListNode** ptr=&ans;
        int sum=0;
        while (l1!=NULL && l2!=NULL){
            sum+=(l1->val+l2->val);
            l1=l1->next;
            l2=l2->next;
            (*ptr)=new struct ListNode(sum%10);
            sum/=10;
            ptr=&((*ptr)->next);            
        }
        while (l1!=NULL){
            sum+=(l1->val);
            l1=l1->next;
            (*ptr)=new struct ListNode(sum%10);
            sum/=10;
            ptr=&((*ptr)->next);            
        }
        while (l2!=NULL){
            sum+=(l2->val);
            l2=l2->next;
            (*ptr)=new struct ListNode(sum%10);
            sum/=10;
            ptr=&((*ptr)->next);            
        }
        if (sum>0){
            (*ptr)=new struct ListNode(sum%10);
            sum/=10;
            ptr=&((*ptr)->next);             
        }
        return ans;
    }
};