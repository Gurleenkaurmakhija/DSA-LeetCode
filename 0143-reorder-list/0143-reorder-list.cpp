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
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=NULL;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        //reverse from slow next
        temp=slow->next;
        slow->next=NULL;
        //cut the list in 2 halves
        ListNode* prev=NULL;
        ListNode* curr=temp;
        ListNode* next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //head of reverse is prev
        ListNode* temp2;
        ListNode* head1=head;
        while(prev && head1){
            
            temp=head1->next;
            temp2=prev->next;
            
            head1->next=prev;
            prev->next=temp;
            
            prev=temp2;
            head1=temp;

        }

        
        


    }
};