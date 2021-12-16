#include <stdio.h>      
                        //*argv[]      //char mat[]                  ]
int main (int argc, char **argv )
{
    if (argc<2)
    {
        printf("El programa no contiene argumentos \n");
        return 0;
    }
    printf("los elementos del arreglo argv  son :\n ");
    for (int cont=0; cont <argc;cont ++)
    {
        printf("argv[%d] = %s \n", cont, argv[cont]);
    }
    return 0; 
}

// arc cuenta cuantas cadenas hay en el arreglo argv