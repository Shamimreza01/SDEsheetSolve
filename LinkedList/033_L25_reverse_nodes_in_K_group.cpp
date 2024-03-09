class Solution {
public:
 ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
      while(temp!=NULL){
          ListNode* front=temp->next;
          temp->next=prev;
          prev=temp;
          temp=front;
      }  
      return prev;
    }

    ListNode* kthNode(ListNode* head, int k){
        ListNode* temp=head;
        while(--k){
            temp=temp->next;
            if(temp==NULL) return NULL;
        }
        return temp;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* temp = head; 
      ListNode* prevLast = NULL; 
    
       while(temp != NULL){
        ListNode* kThNode = kthNode(temp, k); 
        if(kThNode == NULL){
            if(prevLast){
                prevLast -> next = temp; 
            }
            break; 
        }
        ListNode* nextNode = kThNode -> next; 
        kThNode -> next = NULL; 
        reverseList(temp); 

        if(temp == head){
            head = kThNode;
        }else{
            prevLast -> next = kThNode; 
        }
        prevLast = temp; 
        temp = nextNode; 
    }
    return head;   
    }
};