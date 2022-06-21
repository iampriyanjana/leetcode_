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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        
        ListNode* head1=reverse(l1);
        ListNode* head2=reverse(l2);ListNode* head3=NULL;
        ListNode* newhead=head3;
        
        int carry=0,num=0,rem=0;
        while(head1!=NULL || head2!=NULL){
            
            num=head1->val + head2->val;
            rem=num%10;
            
            if(carry==0){
                head3->val=rem;
                head3=head3->next;
                head1=head1->next;
                head2=head2->next;
                
            }
            else{
                
                head3->val=rem+carry;
                if(head3->val > 9){
                    head3->val=(head3->val)%10;
                    carry=(head3->val)/10;
                }
                head3=head3->next;
                head2=head2->next;

            }
            if(num>9){
                carry=num/10;
            }
            if(carry==1){
                head3->val=carry;
            }
        }
          return newhead;
    }
    
    
    ListNode* reverse(ListNode* head)
    {
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp=NULL;
        
        while(curr!=NULL){
            
            temp=curr->next;
            curr->next=prev;
            prev=temp;
            curr=temp;
        }
        return prev;
    }
};