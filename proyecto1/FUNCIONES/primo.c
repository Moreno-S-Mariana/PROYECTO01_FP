#include <stdbool.h>

bool es_primo (int n)
{
    bool primo = true;
    int i;
    for (i=2; i<n; i++)
    {
        if (n%i ==0)
        { 
            primo = false;
            break;
        }
    }
    return primo;
}