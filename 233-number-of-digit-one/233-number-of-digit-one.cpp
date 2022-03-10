
class Solution {
public:
    int dp[11];
    int num = 9;
    vector <int> number;
    int conv(){
        int lNum = 0;
        for(int i = number.size() - 2; i >= 0; i--){
            lNum *= 10;
            lNum += number[i];
        }
        return lNum;
    }
    int cou(){
        int res = dp[number.size() - 1] * (number[number.size() - 1]) + 1;
        
        if(number.size() == 1){
            if(number[0] == 0){
                return 0;
            }
            return 1;
        }
        if(number[number.size() - 1] == 0)
            res --;
        else if(number[number.size() - 1] == 1){
            res += conv();
        }
        else{
            res += num;
        }
        return res;
    }
    
    int countDigitOne(int n) {
        if(n <= 0)
           return 0;
        int cp = n;
        while(cp >= 10){
            number.push_back(cp % 10);
            cp /= 10;
        }
        number.push_back(cp);
        dp[0] = 0;
        dp[1] = 1;
        long long sc = 0;
        for(int i = 2; i < number.size(); i++){
            dp[i] = num + 1 + 10 * dp[i - 1];
            num *= 10;
            num += 9;
        }
        while(number.size()){
            sc += cou();  
            number.pop_back();
            num /= 10;
        }     
        return sc;
    }
};