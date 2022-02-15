class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
          int n=accounts.size();
        int m = accounts[0].size();
        int maxW = INT_MIN;
        for(int i=0;i<n;i++){
            int custW = 0;
            for(int j=0;j<m;j++){
                custW+=accounts[i][j];
            }
            maxW = max(maxW,custW);
        }
        return maxW;
    }
    
};