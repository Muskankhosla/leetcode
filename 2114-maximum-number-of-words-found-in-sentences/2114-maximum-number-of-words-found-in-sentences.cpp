class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int mx=0;
        for(int i=0;i<s.size();i++){
            int cnt=1;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' ')cnt++;
            }
            mx=max(mx,cnt);
        }
        return mx;
    }
};