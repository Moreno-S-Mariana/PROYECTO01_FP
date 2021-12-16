polinomio pol_resta (polinomio p0, polinomio p1)
{
    polinomio res;
    int i=0, j=0, k=0;
    termino term0, term1;
    res.numTerm= p0.numTerm + p1.numTerm;
    res.terminos=(termino *) malloc (res.numTerm * sizeof (termino)); //RESERVO MEMORIA 
    while (i < p0.numTerm)
    {
        while (p0.terminos [i].exp < p1.terminos [j].exp)
        {
            res.terminos [k++]=p1.terminos [j++];
        }
        while (j < p1.numTerm)
        {
            term0= p0.terminos[i];
            term1=p1.terminos [j];
            if (term0.exp > term1.exp )
            {
                res.terminos[k].coef = term0.coef;
                res.terminos [k].exp = term0.exp;
                k++;
                i++;
            }
            else if (term0.exp == term1.exp)
            {
                res.terminos[k].coef = term0.coef - term1.coef ;
                res.terminos[k].exp=term0.exp;
                i++;
                j++;
                k++;
            }
            else if (term1.exp> term0.exp)
            {
                res.terminos[k].coef=term1.coef ;
                res.terminos [k]. coef= term0.coef ; 
                k++;
                j++;
            }
        }
    }
    res.numTerm=k;
    res.terminos = (termino*)realloc (res.terminos, k*sizeof (termino)); // REAJUSTO LA MEMORIA 
    return res;

}
