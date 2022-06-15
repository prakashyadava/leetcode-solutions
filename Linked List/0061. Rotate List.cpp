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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* prev;
        ListNode* curr = head;
        if(!head){
            return NULL;
        }
        int length = 0;
        while(curr){
            curr = curr->next;
            length++;
        }
        curr = head;
        k= k%length;
        while(k--){
            while(curr->next){
                prev = curr;
                curr = curr->next;
            }
            
            curr->next = head;
            head = curr;
            prev->next = NULL;
        }
        return curr;
    }
};
