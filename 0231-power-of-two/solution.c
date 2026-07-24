bool isPowerOfTwo(int n) {
    long long num = n;
    int i;
    if(num==1 || num==2)
    {
        return true;
    }
    if(num==0)
    {
        return false;
    }
    while(num%2==0)
    {    
        num=num/2;
        if(num==2)
        {
             return true;
        }
            
    }
    return false;
}
