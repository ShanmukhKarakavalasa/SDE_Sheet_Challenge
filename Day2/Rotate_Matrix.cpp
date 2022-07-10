#include<vector>
class Solution {
public:
    void rotate(vector<vector<int>>& m) 
    {
       vector<vector<int>> v(200, vector<int>(200));
        int n=m.size(),i,j,k,temp;
        //Transpose the matrix
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(v[i][j]==0 && v[j][i]==0)
                {
                    temp=m[i][j];
                    m[i][j]=m[j][i];
                    m[j][i]=temp;
                    v[i][j]=1;
                    v[j][i]=1;   
                }
                               
            }
        }

        //Flip the matrix
        for(i=0;i<n;i++)
        {
            k=n-1;
            for(j=0;j<n/2;j++)
            {
                temp=m[i][j];
                m[i][j]=m[i][k];
                m[i][k]=temp;
                k--;
            }
        }
        
    }
};
