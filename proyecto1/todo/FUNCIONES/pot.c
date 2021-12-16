float potencia (float b, int e)
{
    int i;
    float res;
    if (e== 0) return 1;
    res =b ;
    for (i=2; i<= e; i++)
    {
        res *=b;
    }
    return res;
}

//LLAMADA RECURSIVA A UNA FUNCIÓN 

/**
 *  b^5 =b* (b ^ 4 )
 *  b^4 =b* (b ^ 3 )
 *  b^3 =b* (b ^ 2 )
 *  b^2 =b* (b ^ 1 )
 *  b^1 =b* (b ^ 0 )
 *  b^0 = 1 
 * */
float potencia_r( float b, float e)
{
    if (e==0 ) return 1;
    else{
        return potencia_r (b, e-1)*b;
    }
}
