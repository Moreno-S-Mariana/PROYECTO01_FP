#include <stdio.h>
/**
 * 
 * Lo mismo que en el ejemplo 1 pero con un do while 
 * 
 * */

int main()
{
    int matriz[3][3]={ {1,2,3}, {4,5,6}, {7,8,9}};
    int i,j;
    printf("Imprimir matriz\n");
    i=0;
    while (i<3)
    {
        j=0;
        while (j<3)
        {
            matriz[i][j]=i+j;
            // se asigna de forma manuala la informacion contenida en nuestra matriz
            printf("%d,", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
