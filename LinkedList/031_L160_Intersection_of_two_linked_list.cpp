class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA,*temp2=headB;
        int l1=0,l2=0;
        while(temp1){
            temp1=temp1->next;
            l1++;
        }
        while(temp2){
            temp2=temp2->next;
            l2++;
        }
        int diff=(l1>=l2)?l1-l2:l2-l1;
        temp1=headA,temp2=headB;
        while(diff--){
            if(l1>l2){
                temp1=temp1->next;
            }else if(l1<l2){
                temp2=temp2->next;
            }
        }
     while(temp1||temp2){
         if(temp1==temp2) return temp1;
         temp1=temp1->next;
         temp2=temp2->next;
     }
    return NULL;  
    }
};

//optimize solution
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA,*temp2=headB;
        if(!headA || !headB) return NULL;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==temp2) return temp1;
            if(!temp1) temp1=headB;
            if(!temp2) temp2=headA;
        }
    return temp1;
    }
}; 