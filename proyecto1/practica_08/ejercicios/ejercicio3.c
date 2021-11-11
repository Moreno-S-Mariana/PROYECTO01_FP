/* 
    Programa para determinar si un numero es primo 
*/

#include <stdio.h>

int main(){
    int num, residuocero=0 , contador;
    printf("Determinar si un numero es primo\n ");
    printf("Dame un numero entero \n");
    scanf("%d" ,& num );
    for (contador=1 ; contador <= num ; contador ++ )
    {
        if ( num % contador  == 0 )
            residuocero ++ ;
    }

    if (residuocero ==2 )
    {
        printf("El numero es primo\n");
    } else {
        printf("No es un numero primo");
    }

    return 0;
}