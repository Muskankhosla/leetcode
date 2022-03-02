class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>h;
        int flag=0;
        for(int i=0;i<nums1.size();i++)
        {
			//searching element in vector nums2
			
            int x=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
			
			// searching for next greater value
			
            for(int j=x;j<nums2.size();j++)
            {
                if(nums2[j]>nums1[i])
                {
                    h.push_back(nums2[j]);
                    flag=1;
                    break;
                }
                else 
                    flag=0;
            }
            if(flag==0)
                h.push_back(-1);
        }
        return h;
    }
};