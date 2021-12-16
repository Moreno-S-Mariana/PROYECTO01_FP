#include <stdio.h>
//instrucción selectiva simple

int main()
{
    int a, b;
    a = 545;
    b = 6320;
    if ( a > b){
        printf("\ta (%d) es mayor que b (%d)\n", a, b); //"\t" es un tabulador horizontal
    }
    printf("\t\vEl programa continua con el flujo normal\n"); //"\v" es un tabulador vertical
    return 0;
}