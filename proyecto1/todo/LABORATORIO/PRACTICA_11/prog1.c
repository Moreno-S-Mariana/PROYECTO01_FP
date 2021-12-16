#include <stdio.h>
#include <string.h>

void imprimir (char[]); //PROTOTIPO DE LA FUNCION IMPRIMIR 

int main ()
{
    char nombre []= "Facultad de ingenieria"; // NUMERO DE CARACTERES VA ENTRE [] Y PUEDE QUEDAR VACIO // OTRA FORMA DE DECLARAR EL ARREGLO {F,A,C,U,L,T,....}
    imprimir (nombre);
    return 0;
}


/**
 *  FUNCION PARA IMPRIMIR LA CADENA DE FORMA INVERSA
 * */

void imprimir (char s[])
{
    int tam;
    for (tam =strlen (s) -1; tam >= 0; tam--) // strlen cuenta el numro de caracteres de la cadena 
    //STRLEN JAMAS VA A CONTAR EL CARACTER DE FIN DE CADENA 
        printf ("%c", s[tam]);
    printf("\n ");
}