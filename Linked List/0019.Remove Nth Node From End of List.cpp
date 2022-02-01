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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1 && n==1){
            
            return NULL;
        }
        
        ListNode* tmp = head;
        
        int pos = count - n;
        
        for(int i=0;i<pos-1;i++){
            tmp = tmp->next;
        }
        if(pos==0 ){
            head = head->next;
            
        }
        else{
            tmp->next = tmp->next->next;
        }
        return head;
        
        
    }
};
