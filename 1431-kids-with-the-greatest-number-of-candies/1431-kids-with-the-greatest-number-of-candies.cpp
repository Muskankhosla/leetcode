class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> v;
        int s=0,mx=0;
        for(int i=0;i<candies.size();i++)
        {
          mx=max(mx,candies[i]);
        }
              for(int i=0; i<candies.size(); i++)
              {
              s=candies[i]+extraCandies;
           
            if(s>=mx)
            {
                       v.push_back(true);
        }
                  else
            {
            v.push_back(false);
        }
    
    }
    return v;
}
};
         

