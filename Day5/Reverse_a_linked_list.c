struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* temp;
    temp=head;
    int i=0,j=0,p,data[5001];
   
    if(head==NULL)
        return head;
        
    if(head->next==NULL)
        return head;
    
    while(temp->next!=NULL)
    {
        data[i]=temp->val;
        temp=temp->next;
        i++;
    }
    
    
    if(i+1==2)
    {
        temp=head;
        int tem=temp->val;
        temp->val=temp->next->val;
        temp->next->val=tem;
        return head;
    }
    
    
    
    data[i]=temp->val;
    temp=head;
    p=i+1;
    
    while(i>=p/2)
    {
        int tem=data[j];
        data[j]=data[i];
        data[i]=tem;
        i--;
        j++;
    }
    i=0;
    
    while(temp->next!=NULL)
    {
        temp->val=data[i];
        i++;
        temp=temp->next;
    }
    
    temp->val=data[i];
    
    return head;
    
    

}
