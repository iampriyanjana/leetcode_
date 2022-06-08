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
    void reorderList(ListNode* head) {
        
        //for finding the middle element
        ListNode* prev=NULL;
        
        ListNode* slow=head,*fast=head;
        
        while(slow && fast && fast->next!=NULL && fast->next->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* headnew=reverse(slow);
    
        
        ListNode* firsthead=head;
        ListNode* secondhead=headnew;
        ListNode* temp1=NULL;
        
        //for linking the nodes of the two separate linked lists
        while(secondhead!=NULL && firsthead!=NULL){
            
            temp1= firsthead->next;
            firsthead->next=secondhead;
            firsthead=temp1;
            
            temp1=secondhead->next;
            secondhead->next=firsthead;
            secondhead=temp1;    
        }
       
    }
    ListNode* reverse(ListNode* curr)
    {
         ListNode* temp=NULL;
         ListNode* prev=NULL;
         while(curr!=NULL){
            
           temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
        }
        return prev;
    }
};