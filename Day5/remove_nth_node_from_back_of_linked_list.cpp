class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count=0,p;
        ListNode* temp=new ListNode();
        temp=head;
        if(head->next==NULL && n==1)
            return NULL;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count==n)
        {
            head=head->next;
            return head;
        }
        p=count-n-1;
        temp=head;
        while(p--)
        {
            temp=temp->next;
        }
        if(temp->next->next!=NULL)
        {
            temp->next=temp->next->next;
            
        }
        else
        {
            temp->next=NULL;
        }
        return head;
    }
};
