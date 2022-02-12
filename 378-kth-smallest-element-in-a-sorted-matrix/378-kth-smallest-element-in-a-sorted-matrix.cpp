class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> que;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                que.push(matrix[i][j]);
                if(que.size()>k){
                    que.pop();
                }//end if
            }//end for
        }//end for
        return que.top();
    }
};