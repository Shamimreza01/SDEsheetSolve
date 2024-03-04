class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* ptr=head;

        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }

        if(count==1) return NULL;
        if(n==count){ 
            return head->next;
        }
        int ourNode=count-n-1;
         ptr=head;
        while(ourNode--){
            ptr=ptr->next;
        }
        ptr->next=ptr->next->next;
        cout<<delNode->val;
        
        return head;   
    }
};