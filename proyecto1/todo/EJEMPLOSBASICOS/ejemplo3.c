/**
 * Se dispone de una lista de n numeros. Se desea calcular el valor del numero mayor 
 * Entradas:
 *      num: entero
 *      n: entero
 * Salidas:
 *      max: entero
 * 
 * Inicio:
 *      1. leer n
 *      2. Leer num
 *      4. max<- num
 *      5. Desde i<- 2 Hasta n con paso 1 Hacer
 *      6.   Leer num
 *      7.      Si num >max Entonces
 *      8.         mas <- num
 *      9.        Fin Si
 *      10.  Fin desde 
 *      11. fin
 * 
 */

#include <stdio.h>
int main()
{
    int n, num;
    int max;
    int i;

    printf("Ingresa la longitud de la lista \n ");
    scanf("%d", &n);
    printf("Ingresa el primer valor \n ");
    scanf("%d", &num);
    for (i=2; i<=n ; i++)
    {
        printf("Ingresa el siguiente valor \n ");
        scanf ("%d", &num);
        if (num > max)
            max =num;
    }
    printf ("El valor máximo es %d \n", max);
    return 0;
}