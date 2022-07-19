class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* temp=new ListNode();
        int tem;
        
        if(list1==NULL && list2==NULL)
        {
            return NULL;
        }
        
        if(list1==NULL && list2!=NULL)
        {
            return list2;
        }
        
         
        if(list1!=NULL && list2==NULL)
        {
            return list1;
        }
        
        temp=list1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp->next=list2;
        
        ListNode* current=new ListNode();
        ListNode* index=new ListNode();
        
        current=list1;
        index=NULL;
        
        if(list1==NULL)
            return NULL;
        
        else
        {
            while(current!=NULL)
            {
                index=current->next;
                while(index!=NULL)
                {
                    if(current->val > index->val)
                    {
                        tem=current->val;
                        current->val=index->val;
                        index->val=tem;
                    }
                    
                    index=index->next;
                }
                
                current=current->next;
            }
        }
        
        return list1;
        
        
    }
};
