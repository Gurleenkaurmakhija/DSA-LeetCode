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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL)return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=even;

        while(even && even->next){
           odd->next=even->next;
           odd=odd->next;
           even->next=odd->next;
           even=even->next;
            
        }
        odd->next=evenHead;

        return head;
       
        
    }
};

//  ListNode* odd1=head;
//          ListNode* even=head;
//          ListNode* odd2=even;

//          while(even && even->next){
//             even=odd1->next;
//             odd2=even->next;
//             odd1->next=odd2;
//             even->next=odd2->next;
//             odd2->next=even;
//             odd1=even;
//             if(even && even->next){
//             even=even->next;
//             odd2=even->next;
//             }
//          }
//          return head;