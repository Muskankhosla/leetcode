int numberOfMatches(int n){
    int m=0,s=0;
    while(n>1)
    {
     if(n%2==0)
     {
         m=n/2;
         n/=2;
         s+=m;
     }
        else
        {
          m=(n-1)/2;
            n=((n-1)/2)+1;
            s+=m;
        }
    }
    return s;

}
