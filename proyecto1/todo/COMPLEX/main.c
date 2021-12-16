#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "complex.h"

//      ARC0   ARG 1       ARG2            ARG3         ARG 4
// ./complex    -in     entrada.txt     -out         salida.txt
//./ complex    -out    salida          -in          entrada 
//./complex     -in     entrada.txt
// ./complex    -out    salida.txt
// separo los argumentos con espacios 

int main (int argc, char * argv [])
// argc recibe el numero de argumentos
// argv es un arreglo de arreglos de cadenas o de caracteres 
{
    if (argc ==5)
    {
        if (strcmp (argv[1], "-in" )==0)
        {
            open_in_file (argv [2]);
        } else if (strcmp (argv[1], "-out" )==0)
        {
            open_out_file (argv [2]);
        }
        if (strcmp (argv[3], "-in" )==0)
        {
            open_in_file (argv [4]);
        } else if (strcmp (argv[3], "-out" )==0)
        {
            open_out_file (argv [4]);
        }
        int op 
        
    }
    else if ( argc == 3)
    {
        if (strcmp (argv[1], "-in" )==0)
        {
            open_in_file (argv [2]);
        } else if (strcmp (argv[1], "-out" )==0)
        {
            open_out_file (argv [2]);
        }
    }
    int op;
    float *ptr;
    int n1, n2;
    while (true)
    {
        menu ( true )
        {
            menu();
            scanf ("%d" , &op);

            switch (op)
            {
                case 1:
                        complex_scan (c);
                        complex_write (c);
                        break ;
                case 2:
                        complex_scan (c);
                        complex_write (c);
                        break ;
                case 3: 
                        printf(" Existen en memory %d comlejos \n");

                        printf(" selecciona 2 \n");
                        scanf("%d ", &n1);
                        scanf("%d", &n2);

                        memory_read (c, n1);
                        memory_rad (c, n2);
                        ptr= complex_add (c, c2);
                        res
            }
            }
        }
        }
    }
    return 0;
} 


void menu()
{
    printf ("Selecciona una opción \n");
    printf("1. leer complejo de teclado \n ");
    printf ("2.leer complejo de archivo \n");
    printf (" 3. sumar complejos \n");
    printf(" 4. resta \n ");
    printf ("5. multiplicacion por un escaclar \n");
    printf("6. multiplicacion \n");
    printf("7. Division \n ");
    printf("8. conjugado \n  ");
    printf("9. Escribir en la pnatalla \n  ");
    printf("10. Escribir en un archivo \n  "); 
    printf("11. Salir \n  "); 

    
    

}
