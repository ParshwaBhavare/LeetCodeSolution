bool isPalindrome(int x) 
{
    int z = x;
    int digit;
    long long rem=0;
    if (x<0)
    {
        return false;
    } 
    while(x!=0)
    {
        digit = x % 10;
        rem = rem * 10 + digit;
        x = x/10;
    }
    return (z==rem);
    
    
}
