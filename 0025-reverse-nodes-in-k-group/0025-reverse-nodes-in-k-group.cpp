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
        if(!head) return head;
        ListNode *temp=head;
        int count =0;
        while(temp && count<k){
            temp=temp->next;
            count++;
        }
        if(count<k)return head;
        count =0;
        ListNode *prev=NULL,*curr=head,*next;
        while(curr &&count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        //reverKgroup takes curr as head for next iteration
        if(curr)head->next=reverseKGroup(curr,k);
        return prev;
    }
};
