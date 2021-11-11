#include <stdio.h>
//If else 
// un bloque para cuando la condición es verdadera
//Para los dos bloques se cumple que si solo hay una condición no es neceario poner las llaves 
//PROGRAMA PARA VER SI EL NÚMERO ES PAR 
int main()
{
    int num;
    printf("Ingrese un número:\n");
    scanf("%d", &num);
    if (num % 2 == 0)   // Si modulo dos da cero es que el numero es par   //cuáundo la condición es verdadera
        printf("El número %d es par.\n", num);
    else
        printf("El número %d es impar.\n", num);// Cuando la condición es falsa 
        //aunque la instrucción ocupa mas de una línea no se necesitan llaves pero si se tiene más de una INSTRUCCIÓN se necesitan las llaves 
    return 0;
}