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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp;
        int count = 0;
        bool chk = false;
        while(curr){
            curr = curr->next;
            count++;
        }
        if(count<k){
           return head;
        }
        curr = head;
        count =0;
        
        while(curr && count<k){
           
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
             count++;
            
            
        }
        
        if(temp){
            head->next = reverseKGroup(temp,k);
        }
        return prev;
    }
};
