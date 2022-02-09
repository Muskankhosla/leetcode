class Solution {
public:
    
         vector<int> sortArrayByParity(vector<int>& a) {
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
            {
               swap(a[i],a[c]);       // Swapping even elements with odd elements.
               c++;            // Keeping track of number of even elements.
            }
        }
        return a;
    }
    
};