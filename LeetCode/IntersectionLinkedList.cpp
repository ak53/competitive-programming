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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode* > set;
        ListNode **ptr=&headA;
        while ((*ptr)!=NULL){
            set.insert((*ptr));
            ptr=&((*ptr)->next);
        }
        ptr=&headB;
        bool flag=false;
        ListNode *ans=NULL;
        while ((*ptr)!=NULL){
            if (set.find((*ptr)) != set.end()){
                if (!flag) {ans=(*ptr); flag=true;}
            }else{
                cout<<"no;
                ans=NULL;
            }  
            ptr=&((*ptr)->next);     
        }  
        return ans;
    }
};