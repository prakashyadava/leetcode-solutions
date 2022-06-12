// by using floyd Algo
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow){
                fast = head;
                while(true){
                    if(slow==fast){
                        return slow;
                    }
                    fast = fast->next;
                    slow = slow->next;
                    
                }
            }
        }
        return NULL;
    }
};
