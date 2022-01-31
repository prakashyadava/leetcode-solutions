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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        if(head==NULL){
            return NULL;
        }
        while(head->next!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        v.push_back(head->val);
        sort(v.begin(), v.end());
        head->val = v[0];
        head->next = NULL;
        ListNode *temp,*last;
        last = head;
        
        for(int i=1;i<v.size();i++){
            temp = new ListNode;
            temp->val = v[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
            
        }
        return head;
    }
};
