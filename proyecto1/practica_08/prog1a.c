#include <stdio.h>
int main()
{
    int num, cont;
    printf("\a----- Tabla de multiplicar -----\n");
    printf("Ingrese un número: \n");
    scanf("%d", &num);
    printf("La tabla de multiplicar del %d es:\n", num);
    cont=1;// es el valor inicial de la variable 
    while (cont <= 10){// asignar una condición 
        printf("%d x %d = %d\n", num, cont, num * cont);
        if (cont==5);
        break; // break se sale del ciclo es decir lo rompe
        cont ++;// si el valor de uno no cambia estariamos en un ciclo infinito
        // cont ++ es la forma de cambiar esa variable
    }

    // while seria que el ciclo se repite mientras la condición sea verdadera
    return 0;
}
// lo principal es tener un valor inicial para la variable 
// segundo paso es dar una condición 
//tercero seria hacer que el valor cambie 