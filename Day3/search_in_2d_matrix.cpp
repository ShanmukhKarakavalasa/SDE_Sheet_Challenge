class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) 
    {
        vector<int> v;
        int i,j,n=m.size(),k=m[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                v.push_back(m[i][j]);
            }
        }
        
        n=v.size();
        for(i=0;i<n;i++)
        {
            if(v[i]==target)
            return true;
        }
        
        return false;
    }
};
