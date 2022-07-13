class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) 
    {
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        
        long long int n=nums.size(),sum=0,left,right;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                long long int target_2=(long long int)tar-nums[i]-nums[j];
                left=j+1;
                right=n-1;
                while(left<right)
                {
                    sum=nums[left] + nums[right];
                    if(sum<target_2)
                    {
                        left++;
                    }
                    
                    else if(sum>target_2)
                    {
                        right--;
                    }
                    
                    else
                    {
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                        ans.push_back(quad);
                        
                        while(left<right && nums[left]==quad[2]) 
                            left++;
                        
                        while(left<right && nums[right]==quad[3])
                            right--;
                    }
                    
                   
                }
                 while(j+1<n && nums[j+1]==nums[j]  )
                        j++;                   
                
            }
            
            while(i+1<n && nums[i+1]==nums[i] )
                        i++;            
        }
        
         return ans;
    }
};
