class Solution {
public:
    int countEven(int num) {
    
int temp = num; //store in temp value(imp).
int sum =0;
while(num>0){
sum = sum + num%10;
num = num / 10;
}
if(sum%2 == 0){
return temp/2;
}
else{
return (int)(temp-1)/2;
}
return 0;

    }
};