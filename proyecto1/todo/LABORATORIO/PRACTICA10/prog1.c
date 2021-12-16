#include <stdio.h>

int main()
{
    int matriz[3][3]={ {1,2,3}, {4,5,6}, {7,8,9}};
    int i,j;
    // arreglo que guarda dentro del, arreglo tres arreglos mas pequeños que guarda dentro de ellos tres enteros
    //de esta forma guardamos la info que esta dentro del arreglo multidimensional
    printf("Imprimir matriz\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d,", matriz[i][j]);
        }
    }
    printf("\n");
    return 0;
}
