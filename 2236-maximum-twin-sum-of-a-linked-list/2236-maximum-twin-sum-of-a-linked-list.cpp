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
ListNode* middle(ListNode* head){
    ListNode* slow=head,*fast=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

ListNode* reverse(ListNode* revHead){
    ListNode* prev=NULL,*curr=revHead,*next;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    return prev;
}
    int pairSum(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* rev=reverse(mid);
        ListNode* temp=head;
        int sum=INT_MIN;
        while(rev){
            int curr=(temp->val)+(rev->val);
            sum=max(sum,curr);
            temp=temp->next;
            rev=rev->next;
        }
        return sum;

        
    }
};