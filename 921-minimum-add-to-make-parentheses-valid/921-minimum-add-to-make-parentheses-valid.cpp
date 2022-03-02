class Solution {
public:
    int minAddToMakeValid(string s) {
        int res = 0;
        stack<char> parenthesis;
        for(int i = 0; i < s.length(); i++){
            char l = s[i];
            if(l == '('){
                parenthesis.push(l);
            }else{
                if(parenthesis.size() && parenthesis.top() == '('){
                    parenthesis.pop();
                }else{
                    parenthesis.push(l);
                }
            }
        }
        return parenthesis.size() ? parenthesis.size() : 0;
    }
};