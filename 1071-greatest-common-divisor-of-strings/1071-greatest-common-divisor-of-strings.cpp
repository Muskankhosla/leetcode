class Solution {
public:    
    string gcdOfStrings(string str1, string str2) {
        int m = str1.length(), n = str2.length();
        
        if(m == 0) return "";
        else if(n == 0) return "";
        else if(str1 == str2) return str1;
        
        if(m > n and str1.substr(0,n) == str2) {
            return gcdOfStrings(str1.substr(n),str2);
        } else if(m < n and str2.substr(0,m) == str1) {
            return gcdOfStrings(str2.substr(m),str1);
        }
        
        return "";
    }  
};