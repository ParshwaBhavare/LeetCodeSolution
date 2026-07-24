bool isPowerOfFour(int n) { 
    long long num = n;
    int i;
    if(num==1 || num==4)
    {
        return true;
    }
    if(num==0)
    {
        return false;
    }
    while(num%4==0)
    {    
        num=num/4;
        if(num==4)
        {
             return true;
        }
            
    }
    return false;
}
    

