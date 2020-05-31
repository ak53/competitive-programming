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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> ans;
        while (l1!=NULL && l2!=NULL){
            // printf("baam");
            if (l1->val>=l2->val){
                ans.push_back(l2->val);
                l2=l2->next;
            }else{
                ans.push_back(l1->val);
                l1=l1->next;
            } 
        }
        while(l1!=NULL){
            // printf("yes");
            ans.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            // printf("oh yeah");
            ans.push_back(l2->val);
            l2=l2->next;
        } 
        ListNode* ptr=NULL;
        if (ans.size()==0){
            return ptr;
        }
        ListNode* head=new struct ListNode(ans.at(0));
        ptr=head;
        for (int i=1;i<ans.size();i++){
            ListNode* temp=new struct ListNode(ans.at(i));
            ptr->next=temp;
            ptr=ptr->next;
        }
        return head;
    }
};