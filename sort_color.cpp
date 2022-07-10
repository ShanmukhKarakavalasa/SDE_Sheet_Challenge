class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                c1++;
            }
            
            else if(nums[i]==1)
            {
                c2++;
            }
            
            
        }
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(c1>0)
            {
                nums[i]=0;
                c1--;
                continue;
            }
            
            else if(c2>0)
            {
                nums[i]=1;
                c2--;
                continue;
            }
            
            nums[i]=2;
        }
    }
};
