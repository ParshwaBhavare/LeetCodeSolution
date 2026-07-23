bool checkPerfectNumber(int num) {
    int digit=1;
    unsigned long long n1 = num;
    int i;
    if(n1 == 1)
    {
        return false;
    }
    for(i=2 ; i<=n1/2 ; i++ )
    {
        if(n1 % i ==0)
        {
            digit = digit + i;
        }
    }
    if(digit == n1 )
    {
        return true;
    }
    return false;
    
}
