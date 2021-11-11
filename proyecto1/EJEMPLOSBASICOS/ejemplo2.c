/**
 * escribir un algoritmo que permita escribir en la pantalla la frase "¿ Desea continuar ? hasta que la respuesta sea S/N"
 * 
 * pseudocódigo
 *   entrada: r: caracter 
 * 1. inicio
 *   2. Repetir
 *      3. Escribir "¿Desea continuar? S/N"
 *        4. leer r
 *           5. Hasta que r='s' o r='n'
 * 6. fin
 */

#include <stdio.h>
int main(){
    char r;
    do
    {
        printf("¿ Desea continuar? S/N \n");
        scanf("%c", &r );
        getchar();
    } while (r!= 'S'&& r!='N');
    return 0;
    
}