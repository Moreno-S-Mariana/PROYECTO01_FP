#include <stdio.h>


int main()
{
    int matriz[5][5];
    int i,j;
    printf("Imprimir matriz\n");
    i=0;
    do
    {
        j=0;
        do
        {
            matriz[i][j]=i+j;
            // se asigna de forma manuala la informacion contenida en nuestra matriz
            printf("%d,", matriz[i][j]);
            j++;
        } while (j<3);
        printf("\n");
        i++;
    }while (i<5);
    return 0;
}
