 //solution 1 we also call as brute force
 /*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        int count=0;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        int mid;
        if(count%2==0) mid=(count/2)+1;
        else mid=(count+1)/2;

        ListNode* newHead;
        ptr=head;
        while(mid--){
            newHead=ptr;
            ptr=ptr->next;
        }
        return newHead;
    }
};
*/
//optimize 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};