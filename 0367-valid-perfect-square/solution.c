bool isPerfectSquare(int num) 
{
    long long n;
    if(num == 1)
        {
            return true;
        }
    long long i;
    for(i=2; i<=num/2; i++)
        {
            n = i * i;

            if(n==num)
            {
                return true;
            }
           
        }
        return false;
}
