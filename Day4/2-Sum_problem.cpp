class Solution {
public:
vector<int> twoSum(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;

            for(int i=0;i<nums.size();i++)
            {

                if(m.find(k-nums[i])!=m.end())
                    return {i,m[k-nums[i]]};
                else  m[nums[i]]=i;
            }

            return {};
    }
};
