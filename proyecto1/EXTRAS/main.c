#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversiones.h"

int main()
{
    int num;
    char *binario;

    printf("Ingresa un número entero en base 10:  \n");
    scanf("%d", &num);    
    binario= conv_decimal_binario (num);
    printf("Su equivalente en binario es %s\n", binario);

   /* printf("Ingresa un número entero en base 2:  \n");
    scanf("%s", &binario);
    num = conv_binario_decimal(binario);    
    printf("Su equivalente en base 10 es %d\n", num);*/
    return 0;
}