class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      
int n = nums.size();
sort(nums.begin(),nums.end());
int ans = 0;
for(int i=0; i<=n-3; i++) {
int a = nums[i], b = nums[i+1], c = nums[i+2];
if((a+b > c) && (a+c) > b && (b+c) > a) {
ans = max(ans,(a+b+c));
}
}
return ans;
}
};
