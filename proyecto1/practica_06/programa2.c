#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("El tamaño de memoria de un entero  es %d bytes \n" , sizeof(int));
    printf("El tamaño de memoria de un entero corto  es %d bytes \n" , sizeof(short));
    printf("El tamaño de memoria de un entero largo  es %d bytes \n" , sizeof(long));
    printf("El tamaño de memoria de un flotante  es %d bytes \n" , sizeof(float));
    printf("El tamaño de memoria de un doble percision   es %d bytes\n" , sizeof(double)); 
    printf("El tamaño de memoria de un doble precision largo  es %d bytes\n" , sizeof(long double));
    printf("El tamaño de memoria de un caracter  es %d bytes\n" , sizeof(char));
    printf("El tamaño de memoria de un booleano  es %d bytes\n" , sizeof(bool));
    printf("El tamaño de memoria de un void  es %d bytes\n" , sizeof(void));

    printf("El tamaño de memoria de un entero con signo  es %d bytes\n" , sizeof(signed int )); // signed se utiliza cuando se necesite pedir al usuario que coloque un signo a los numeros 
    printf("El tamaño de memoria de un entero sin signo  es %d bytes\n" , sizeof(unsigned int )); //unsigned cunado solo quiero numeros positivos 
// printf("El tamaño de memoria de un entero con signo  es %d bytes\n" , sizeof(signed double ));
// printf("El tamaño de memoria de un entero sin signo  es %d bytes\n" , sizeof(unsigned ouble ));
    return 0;
    // todo lo que se vaya a usar en memoria ocupa cierto espacio
}