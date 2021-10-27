class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> flag;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                  if(i==j) continue;
                
                if(nums[i]+nums[j]==target)
                {
                    flag.push_back(i);
                      flag.push_back(j);
                    return flag;
                    }
            }
        }
        return flag;
    }
};



