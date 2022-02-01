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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        while(list1!=NULL || list2!=NULL){
            if(list1!=NULL){
                v.push_back(list1->val);
                list1 = list1->next;
                
            }
            if(list2!=NULL){
                v.push_back(list2->val);
                list2 = list2->next;
                
            }
        }
        sort(v.begin(), v.end());
        ListNode* ft = new ListNode;
        ft->val = v[0];
        ft->next= NULL;
        ListNode* lt = ft;
        
        for(int i=1;i<v.size();i++){
            ListNode* temp = new ListNode;
            temp->val = v[i];
            temp->next = NULL;
            lt->next =temp;
            lt = temp;
            
        }
        return ft;
        
    }
};
