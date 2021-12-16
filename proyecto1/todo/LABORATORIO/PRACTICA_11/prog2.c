#include <stdio.h>

// LOS PROTOTIPOS DE FUNCIONES DEVEN ESTAR SIEMPRE ARRIBA DE MAIN 

void sumar ();
int main ()
{
    sumar();
    return 0;
}

void sumar ()
{
    int x=5, y=10;
    int z;
    z=x+y;
    /**void restar()
        {
            int a,b;
            int c;
            c=a-b;
        }
    printf( "%i", z);
    */
}
//CAUNDO EL COMPILADOR DICE FINCION IMPLICITA ES QUE NO ESTA EL PROTOTIPO DONDE DEVE 
// EN LENGUAJE C NO PUEDO ESCRIBIR UNA FUNCION DENTRODE OTRA FUNCION 


