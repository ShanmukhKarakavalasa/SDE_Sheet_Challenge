class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        int count=0;
        
        if(head->next==NULL)
            return head;;
        
        if(head->next->next==NULL)
            return head->next;
        
        ListNode* temp=new ListNode();
        temp=head;
        
        
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        
        if(count%2!=0)
        {
            temp=head;
            count=count/2;
            while(count--)
            {
                temp=temp->next;
            }
            
            return temp;
        }
        
        else 
        {
            temp=head;
            count=(count/2);
            while(count--)
            {
                temp=temp->next;
            }
            
            return temp;
        }
    
    }
};
