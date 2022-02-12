

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if((n*m)!=(r*c))
        {
            return mat;
        }
        int p=0,q=0;
        vector<vector<int>>ans(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=mat[p][q];
                q++;
                if(q>(n-1))
                {
                    q=0;
                    p++;
                }
            }
        }
        return ans;
    }
};