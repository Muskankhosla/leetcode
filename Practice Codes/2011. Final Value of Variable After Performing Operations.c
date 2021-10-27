
int finalValueAfterOperations(char ** operations, int operationsSize){
  int sum=0;
    for(int i=0;i<operationsSize;i++)
    {
        if(operations[i][1]=='+')
           sum+=1;
        else 
            sum+=-1;
    }
   return sum;

}

