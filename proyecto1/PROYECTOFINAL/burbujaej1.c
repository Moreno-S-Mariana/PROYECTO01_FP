#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief funcion que implementa el metodo de ordenacion por burbuja
 * @param a, arreglo de números a ordenar
 * @param n, longitud del arreglo
 * */

void bubble_sort (int a[], int n)
{
    bool follow=true;
    int pasada, j;
    int limite, aux;
    limite =n; 
    for (pasada =0; pasada < limite  & follow ==true; pasada ++)
    {
        follow= false; // si no hay intercambios demos por ordenado el arreglo 
        for (j=0;j <limite -1; j++)
        {
            if (a[j]>a[j+1])
            {
                aux =a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
                follow =true;
            }
        }
    }
}

int main (int argc, char **argv)
{
    if (argc<3)
    {
        printf ("faltan argumentos \n");
        exit(EXIT_FAILURE);
    }
    int array [argc-1];
    for(int i=0;i < argc -1; i++)
    {
        array [i] = atoi (argv[i+1]);
    }
    bubble_sort (array, argc -1);
    printf("[");
    for (int i=0; i <argc-1;i++)
    {
        printf("%d", array[i]);
    }
    printf("]\n");
    return 0;
}




