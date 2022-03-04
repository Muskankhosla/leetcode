class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        double ans=0;
        double count=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=salary[i];
            count++;
        }
        ans=sum/count;
        return ans;
    }
};