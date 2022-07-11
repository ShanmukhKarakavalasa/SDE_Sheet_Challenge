class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //Moores voting algorithm
        int count=0,ele=0;
        for(int num:nums)
        {
            if(count==0)
            {
                ele=num;
            }
            
            if(num==ele)            
            count++;
            
            else
            count--;            
        }
        return ele;
    }
};
