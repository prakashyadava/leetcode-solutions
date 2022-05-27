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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p,*q;
        if(!head){
            return NULL;
        }
        p = head;
        bool chk = false;
        if(p->next!=NULL){
            q = p->next;
            chk = true;
        }
        while(q!=NULL && chk){
            if(p->val==q->val){
                ListNode *temp;
                temp = q;
                q= q->next;
                p->next = q;
                delete temp;
            }else{
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};
