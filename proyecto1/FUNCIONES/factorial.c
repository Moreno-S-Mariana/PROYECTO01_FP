long factorial (long n )
{
    long i,f;
    f=1;
    for (i=2; i <=n; i++)
    {
        f=f*i;
    }
    return f;
}

// recursiva

long factorial_r( long  n)
{
    if (n== 1 || n==00) return 1;
    else
    {
        return n* factorial_r(n-1);
    }
}