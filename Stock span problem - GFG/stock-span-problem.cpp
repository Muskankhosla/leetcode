// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      

        stack<pair<int,int>> st;
        vector<int> span;
        for(int i = 0; i < n; i++){
            if(st.empty()){
                span.push_back(1);
            } else {
                while(!st.empty() && st.top().first <= price[i]){
                    st.pop();
                }
                if(st.empty()) span.push_back(i+1);
                else span.push_back(i - st.top().second);
            }
            st.push({price[i],i});
        }
        return span;
    } // Your code here
    
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends