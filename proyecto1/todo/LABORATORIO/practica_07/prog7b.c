#include <stdio.h>
//PROGRAMA OARA VER ENUMERADOS
int main()
{
    // declaración de la enumeración
    typedef enum boolean
    {
        NO,//NO = 0
        YES //YES =1
    }BOOL;

    // declaración de una variable tipo enumeración
    BOOL valorBooleano;
    valorBooleano = YES;

    // Se comprueba que el valor de una enumeración es entero
    printf("%d\n", valorBooleano);

    // Se comprueba que el valor de una enumeración se puede reasignar
    typedef enum diasSemana  //TYPEDEF es para asignar un apodo a la veriable
    {
        LUNES,
        MARTES,
        MIERCOLES = 5,
        JUEVES,
        VIERNES
    }DIA ;
    printf("\n%d", LUNES);
    printf("\n%i", MARTES);
    printf("\n%d", MIERCOLES);
    printf("\n%i", JUEVES);
    printf("\n%d\n", VIERNES);

    return 0;
}