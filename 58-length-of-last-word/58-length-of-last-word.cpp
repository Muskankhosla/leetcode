class Solution {
public:
    int lengthOfLastWord(string s) {
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ')
                s.pop_back();
            else
                break;
        }
        int c=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
                c++;
            else
                break;
        }
        return c;
    }
};