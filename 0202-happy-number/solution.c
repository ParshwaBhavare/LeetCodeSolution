bool isHappy(int n) {

    int digit;
    int a;
    int a1;
    while (n!=1)
    {
        if(n==4)
        {return false;}

      a1=0;
    while (n>0)
    {
        digit=n%10;
        a=digit*digit;
        a1= a + a1;
        n=n/10;
    }
            n=a1;
        }
        
            return true;
              
}

