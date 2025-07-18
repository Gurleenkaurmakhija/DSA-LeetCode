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
    ListNode* swapPairs(ListNode* head) {
        if(!head ||!head->next)return head;

        ListNode *t1=head,*t2=head->next,*t3=head->next->next;
        t1->next=t3;
        t2->next=t1;

        head=t2;
        ListNode *temp=head->next;

        while(temp && temp->next && temp->next->next){
            ListNode *a=temp;
            ListNode *b=temp->next;
            ListNode *c=temp->next->next;
            ListNode *d=temp->next->next->next;

            a->next=c;
            b->next=d;
            c->next=b;

            temp=temp->next->next;

            

        }
        return head;
        
    }
};