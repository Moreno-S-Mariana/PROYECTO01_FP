#include <stdio.h>

// OPERADOR TERNARIO
//si a es menor que b entonces al resultado asigna b-a 
//si b es menor se efectu a-b
// El operador ternario se puede poner en lugar de un if para resumir 
int main()
{
    double a, b, res;
    printf("Calcular el error matemático E = |a - b|\n\n");
    printf("Ingrese el valor de a:\n");
    scanf("%lf", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%lf", &b);
    res = a < b ? b - a : a - b;
    printf("El error matemático de\n");
    printf("| %lf - %lf | es %lf\n", a, b, res);
    return 0;
}