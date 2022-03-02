class Solution {
public:
    int noofone(int x)
    { int rem=0,dec,count=0;
        while(x>0)
            
        {
            rem=x%2;
            x=x/2;
            if(rem==1)
            {
                   count++;
            }
            dec+=rem*10;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>arr;
        for(int i=0;i<=n;i++)
        {
            arr.push_back(noofone(i));
        }
        return arr;
    }
};