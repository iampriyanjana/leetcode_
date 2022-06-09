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
        
        ListNode* dummy=head;
        int TotalNodes=0;
        ListNode* curr=head;
        
        if(head->next==NULL){
            
            return NULL;
        }
        
        while(dummy){
            
            TotalNodes++;
            dummy=dummy->next;
        }
        
        if(TotalNodes==n){
            
             curr=curr->next;
            head=curr;
            return head;
        }
        
        int diff=TotalNodes-n-1;
        
        while(diff){
            
            diff--;
            curr=curr->next;
        }
        
        curr->next=curr->next->next;
        return head;
    }
};