#include <stdio.h>
#include "funciones.h"


int main(){
    float mat[3][3];
    float mat2 [4] [4];
    float **mat3= NULL; // ESTAMOS APUNTANDO A NULO ES DECIIR NO HAY VALOR  
    //Numero de filas luego numero de columnas 
    // Estoy declarando una matriz de tres renglones por tres columnas 

    mat_read_3 (mat, 3);
    mat_read_4 ( mat2,4);
    mat3= mat_create (3,4); //crear
    mat_read_4 (mat3,3, 4); //usar
    mat_delete (mat3,3); //borrar

    return 0;


}