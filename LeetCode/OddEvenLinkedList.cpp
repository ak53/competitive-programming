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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode *ho=head;
        ListNode **ptro=&ho;
        ListNode *he=(head->next);
        ListNode **ptre=&he;
        ho->next=NULL;
        ListNode *ptr=he->next;
        he->next=NULL;
        int count=3;
        while (ptr->next!=NULL){
            if (count%2==0){
                (*ptre)->next=(ptr);
                ptre=&((*ptre)->next);
                ptr=ptr->next;
               (*ptre)->next=NULL;         
            }else{
                (*ptro)->next=(ptr);
                ptro=&((*ptro)->next);
                ptr=ptr->next;
               (*ptro)->next=NULL;   
            }
            count++;
        }
        if (count%2==0){
            (*ptre)->next=(ptr);
            ptre=&((*ptre)->next);
        }else{
            (*ptro)->next=(ptr);
            ptro=&((*ptro)->next);
        }
        (*ptro)->next=he;
        ListNode **p=&(ho);
        return ho;
    }
};