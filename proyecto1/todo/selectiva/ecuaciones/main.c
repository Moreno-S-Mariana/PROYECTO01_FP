#include <stdio.h>
#include "ecuaciones.h"

int main()
{
    float a,b,c;
    printf("inge¿resa el valor de los coheficientes \n");
    scanf("%f %f %f ", &a, &b, &c);

    if (a==0){
        lineal (b,c);
    }
    else {
        cuadratica (a,b,c);
    }
    return 0;
}