class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode= new ListNode(-1);
        ListNode* currNode=dummyNode;
        int carry=0;
        int sum=0;
        while(l1||l2||carry){
            sum=carry;
            if(l1) sum+=l1->val;
            if(l2) sum+=l2->val;
            ListNode* newNode= new ListNode(sum%10);
            currNode->next=newNode;
            currNode=currNode->next;
            carry=sum/10;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        
        return dummyNode->next;
    }
};