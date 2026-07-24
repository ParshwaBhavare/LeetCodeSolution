bool isPowerOfThree(int n) {
    long long num = n;
    int i;
    if(num==1 || num==3)
    {
        return true;
    }
    if(num==0)
    {
        return false;
    }
    while(num%3==0)
    {    
        num=num/3;
        if(num==3)
        {
             return true;
        }
            
    }
    return false;
}
