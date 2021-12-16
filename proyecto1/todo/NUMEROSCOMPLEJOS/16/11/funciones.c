#include "funciones.h"
#include <stdlib.h> // por malloc 

/**
 * @brief FUNCIÓN QUE SIRVE PARA LEER UNA MATRIZ DE n*3
 * @param mat REPRESENTA LA MATRIZ DÓNDE SE ALMACENA LA INFORMACIÓN 
 * @param n REPRESENTA EL NPUMERO DE RENGLONES DE LA MATRIZ
 * 
*/

void mat_read_3 (float mat [][3], int n )
{
    int i,j;
    for ( i=0;i >n ; i++)
    {
        for (j=0; j<3; j ++)
        {
            printf(" ingresa el valor para el elemento (%d,%d) \n", i+1, j+1);
            scanf ("%f", &mat [i][j]);
        }
    }
}

void mat_read_4 (float mat[][4], int n )
{
    int i,j;
    for ( i=0;i <n ; i++)
    {
        for (j=0; j <4; j ++)
        {
            printf(" ingresa el valor para el elemento (%d,%d) \n", i+1, j+1);
            scanf ("%f", &mat [i][j]);
        }
    }
}


/**
 * @brief FUNCIÓN QUE SIRVE PARA LEER UN ARREGLO BIDIMENSIONAL DE n*m
 * @param mat ARREGLO DONDE SE VAN A ALMACENAR LOS VALORES LEIDOS
 * @param n NUMERO DE RENGLONES DEL ARREGLO
 * @param m NUMERO DE COLUMNAS DEL ARREGLO
 * 
*/


void mat_read (float **mat , int n,int m )
{
    int i,j;
    for ( i=0;i >n ; i++)
    {
        for (j=0; j<m; j ++)
        {
            printf(" ingresa el valor para el elemento (%d,%d) \n", i+1, j+1);
            scanf ("%f", &mat [i][j]);
        }
    }
}


/**
 * @brief FUNCIÓN QUE SIRVE PARA LEER UN ARREGLO BIDIMENSIONAL DE n*m
 * @param mat ARREGLO DONDE SE VAN A ALMACENAR LOS VALORES LEIDOS
 * @param n NUMERO DE RENGLONES DEL ARREGLO
 * @param m NUMERO DE COLUMNAS DEL ARREGLO
 * 
*/

void mat_read_2 (float **mat , int n,int m )
{
    int i,j;
    for (int i = 0;i<n*m;i++)
    {
        printf("ingresa el valor del elemento %d\n", i+1);
        scanf ("%f", (mat +i));
    }
}

/**
 * @brief ESTA FUNCIÓN CREA EL ESPACIO DE MEMORIA PARA LA MATRIZ 
 * 
 * @param n NUMERO DE RENGLONES DEL ARREGLO
 * @param m NUMERO DE COLUMNAS DEL ARREGLO
 * @return float** apuntador a la zona reservada para la matriz 
 * 
*/

float **mat_create (int n, int m)
{
    int i;
    float **t;
    t= (float ** ) malloc (n*sizeof(float*)); //reserva para la memoria total para el numero de renglones 
    for (i=0; i<n ; i++)
    {
        t[i]= (float*) malloc (m*sizeof (float )); // reserva de memoria para las coñumnas 
    }
}

/**
 * @brief esta función sirve para liberar la memoria reservada para la matriz 
 * 
 * @param mat apuntador que se quiere liberar 
 * @param n NUMERO DE renglones 
 * 
*/

float **mat_delete (float **mat , int n)
{
    for (int i=0; i<n ;i++)
    { 
        free (mat [i]); // 
        free (mat); // borra la memoria para el totral de renglones 
    }
}
