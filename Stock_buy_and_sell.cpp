class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int maxi=INT_MIN,flag=-1;
        for(int i=0;i<p.size()-1;i++)
        {
            for(int j=i+1;j<p.size() && p[j]-p[i]>0;j++)
            {
                maxi=max(maxi,p[j]-p[i]);
                flag=1;
            }
        }
        
        if(flag==1)
            return maxi;
        else
            return 0;
    }
};
