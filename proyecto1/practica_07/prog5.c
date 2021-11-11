#include <stdio.h>
//switch 
//Para cambiar de un caso a otro
// en este caso el caracter nulo e '\0'
//Hay que reservar memoria para reservar el caracter nulo
int main()
{
    char op = '\0';
    printf("\tMenú\n\n");
    printf("Elegir la opción deseada\n");
    printf("a) Ingresar\n");
    printf("b) Registrarse\n");
    printf("c) Salir\n");
    scanf("%c", &op);
    switch (op)
    //el switch solo nos sirve para nuero enteros y caracteres 
    {
    default: // el default puede ir al inicio o al finar, incluso en medio o pordia hasta no existir 
        printf("Opción no válida.\n");
        break;// sirve para salir y ya no seguir ejecutando
    case 'a' :
    case 'A': // Se evalua tanto para a minuscula como para a mayuscula 
        printf("Se seleccionó 'Ingresar'.\n");
        break;
    case 'b':
        printf("Se seleccionó 'Registrarse'.\n");
        break;
    case 'c':
        printf("Se seleccionó 'Salir'.\n");
        break;
    }
    return 0;
}