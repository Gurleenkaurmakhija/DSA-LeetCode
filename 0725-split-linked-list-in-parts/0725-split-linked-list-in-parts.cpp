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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length=0;
        ListNode * temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        int diff=length%k;
        temp=head;
        ListNode* next;
        int i=0;
        vector<ListNode*>parts(k,NULL);
        while(temp){
            int size=length/k;
            if(diff!=0){
                size+=1;
                diff--;
            }

            parts[i]=temp;
            i+=1;
            while(temp->next && --size){
                temp=temp->next;
            }
            if(temp){
                 next=temp->next;
                 temp->next=NULL;
            temp=next;

            }
           

            
        }
    return parts;
}
};