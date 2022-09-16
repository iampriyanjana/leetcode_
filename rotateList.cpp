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
        
        ListNode* curr=head,*prev=NULL,*temp=NULL,*tempo=head;
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        
        while(tempo!=NULL){
            
            count++;
            tempo=tempo->next;
        }
    
            k=k%count;
        
        if(k==0 || k%count==0){
            
            return head;
        }
        while(curr!=NULL){
            
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        ListNode* temp2=prev;curr=prev;prev=NULL;
        
        while(k>0){
            
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            k--;
        }
        
        head=prev;
        prev=NULL;
        while(curr!=NULL){
            
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        temp2->next=prev;
        
        return head;
    }
}