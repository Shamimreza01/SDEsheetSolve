class Solution {
public:
    ListNode* nthNode(ListNode* head ,int n){
        ListNode* temp=head;
        while(--n){
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
        if(k%len==0) return head;
        if(k>len) k=k%len;
        tail->next=head;
        ListNode* newTail=nthNode(head,len-k);
        ListNode* newHead=newTail->next;
        newTail->next=NULL;
        return newHead;
    }
};