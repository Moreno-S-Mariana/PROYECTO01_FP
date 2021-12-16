/**
 * ax +b=0       
 * a!=0            x=-b/a
 * a=0 b!=0        la dolución es imposible 
 * a=0     b=0     la solución es indeterminada

*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,x;
    printf("ingresa tus valores a y b\n");
    scanf ("%f %f ", &a, &b);
    if (a!=0){
        x=-b/a;
        printf("El valor de x es %f\n",x);
    }else if (b!=0){
        printf("La solución es imposible \n");
    }else { 
        printf(" La solución es indeterminada \n ");
    }

    return 0;
}