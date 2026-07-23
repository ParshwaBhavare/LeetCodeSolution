double myPow(double x, int n) {
    int i;
    long long n1 = n;
    double res = 1.0;
    if(n<0)
    {
        x = 1.0 / x;
        n1 = -(n1);
    }
        while(n1>0)
        {
            if(n1 % 2 == 1)
             res = res * x;   
             x = x*x;
             n1 = n1 /2;       
        }
       return res;
}
