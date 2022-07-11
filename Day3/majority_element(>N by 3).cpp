class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int p=(nums.size()/3)+1,count=1;
        vector<int> v;
        
        sort(nums.begin(),nums.end());
        int ele=nums[0];
        
        for(int i=1;i<nums.size();++i)
        {
            if(ele==nums[i])
            count++;
            else
            {
                cout<<count<<endl;
                if(count>=p)
                {
                    
                    v.push_back(ele);
                }
                count=1;
                ele=nums[i];
            }
        }
        if(count>=p)
        v.push_back(ele);
        
        return v;
        
    }
};
