#include <stdio.h>

int resultado; // variable global 

void multiplicar ();

int main ()
{
    multiplicar();
    printf("%i", resultado);
    return 0;
}

/*void multiplicar ()
{
    resultado =5*4;
    return 0;
}

        ESTA MAL POR QUE ES UN VOID Y ME PIDE QUE REGRESE UN VALOR 

*/

void multiplicar ()
{
    resultado =5*4;
    return;
}
