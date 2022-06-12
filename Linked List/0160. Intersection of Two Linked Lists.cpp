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
        int A=0,B = 0;
        ListNode* temp = headA;
        while(temp){
            temp = temp->next;
            A++;
        }
        temp = headB;
        while(temp){
            temp = temp->next;
            B++;
        }
        ListNode* ptr1;
        ListNode* ptr2;
        int d =0;
        if(A>B){
            d = A-B;
            ptr1 = headA;
            ptr2 = headB;
        }
        else{
            d = B-A;
            ptr1 = headB;
            ptr2 = headA;
        }
        while(d){
            ptr1 = ptr1->next;
            if(ptr1==NULL){
                return NULL;
            }
            d--;
        }
        while(ptr1 && ptr2){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
        
    }
};
