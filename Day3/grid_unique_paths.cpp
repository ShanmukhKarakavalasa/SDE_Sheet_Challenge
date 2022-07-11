class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        //Based on the formula (m+n-2)C(m-1) or (m+n-2)C(n-1)
        int dir=m+n-2;
        int p=min(m-1,n-1);
        long double res=1;
        for(int i=1;i<=p;i++,dir--)
        {
            res=res* (dir)/i;
        }
        
        return res;
        
    }
    
   
   
};
