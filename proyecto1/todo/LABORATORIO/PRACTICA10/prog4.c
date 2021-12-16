/**
 * tipo *nombre;
 * nombre= &var;
 * nombre =(tipo*) malloc (sizeof(tipo));
 *   son las dos formas de asignar informaciona a un apuntador 
 * */

#include <stdio.h>

int main()
{
    int matriz [3][3]= { {1,2,3},{ 4,5,6}, {7,8,9}};
    int i, cont=0, *ptr;
    ptr = *matriz; // ap = &matriz [0] [0]
    printf ("Imprimiendo matriz \n");
    for (i=0; i<9; i++)
    {
        if (cont ==3) // se condiciona a que i =3
        // se esta condicionando para que el salto de linea sea cada tres valores
        {
            printf("\n");
            //cuando antepongo un asterizco en un apuntador solicito el valor apuntado 
            cont=0;
        }
        printf("%d,",*(ptr+i) );
        cont ++;
    }
    printf("\n");
    return 0;
}