class Solution {
public:
    int firstUniqChar(string s) {
	//taking array size of 123 as ascii value of lower alphabets lies between 97 to 123--
        int arr[123]={0};
        for(int i=0;i<s.size();i++){
            arr[int(s[i])]++;
        }
        for(int i=0;i<s.size();i++){
            if(arr[int(s[i])]==1)
                return i;
        }
        return -1;
    }
};