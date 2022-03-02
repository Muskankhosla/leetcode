class Solution {
public:
    int maxDepth(string s) {
        int count=0,maxv=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){ count++;
            st.push('(');
            maxv=max(maxv,count);}
            else if(s[i]==')'){ count--;
            st.pop();}
        }
        return maxv;
    }
};