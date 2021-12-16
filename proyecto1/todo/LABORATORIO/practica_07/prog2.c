#include <stdio.h>
/* Esto es un comentario que abarca varias lineas 
*
*
*
*
*/
int main()
{
    if (0)
    {
        printf("Esta instrucción nunca se ejecuta\n");
        printf("porque la condición siempre es falsa (0).\n");
    }
    if (-38) // El bloque de código de esta estructura if
        // solo consta de una línea porque los comentarios
        // no son tomados en cuenta por el compilador.
        // La condición siempre es verdadera (diferente de 0)
        //Las llaves no son necesarias por que en cuanto al codigo solo es una instruccion a ejecutar 
        printf("Esta instrucción siempre se ejecuta.\n");
    return 0;
}