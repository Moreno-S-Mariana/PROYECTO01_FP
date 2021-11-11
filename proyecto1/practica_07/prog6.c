#include <stdio.h>
//Es una replica del programa 5 solo que va a trabajar con enteros 
//Todas las cadenas terminan con un caracter nulo
int main()
{
    int op = 0;
    printf("\tMenú\n\n");
    printf("Elegir la opción deseada\n");
    printf("1) Ingresar\n");
    printf("2) Registrarse\n");
    printf("3) Salir\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Se seleccionó 'Ingresar'\n");
        break;
    case 2:
        printf("Se seleccionó 'Registrarse'\n");
        break;
    case 3:
        printf("Se seleccionó 'Salir'\n");
        break;
    default:
        printf("Opción no válida\n");
    }
    return 0;
}