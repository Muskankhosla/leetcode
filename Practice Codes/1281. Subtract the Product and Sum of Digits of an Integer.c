

int subtractProductAndSum(int n)
{
    int x,mul=1,s=0,res=0;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        s+=x;
        mul*=x;
        
    }
    res=mul-s;
    return res;

}
