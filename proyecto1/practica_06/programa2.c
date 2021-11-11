/**
 * 
 * Programa que nos muestra en bytes el tamaño de memoria que ocupa una variable o tipo de datos 
 * Es importante resaltar que toda variable ocupa cierta cantidad de memoria 
 * 
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
            // sizeof nos regresa el tamaño en bytes de una variable, o un tipo de datos 
        printf("El tamaño de memoria de un entero  es %d bytes \n" , sizeof(int));
            //int es la palabra reservada para enteros 
        printf("El tamaño de memoria de un entero corto  es %d bytes \n" , sizeof(short));
            //short es un calificador que como su nombre nos dice indica que es corto
            // En este caso short es un calificador de un entero por lo que se puede omitir la palabra reservada int 
        printf("El tamaño de memoria de un entero largo  es %d bytes \n" , sizeof(long));
            // long es un calificador que como su nombre lo indica nos dice que es largo
            // En este caso long funciona como un calificador por lo que se puede omitir la palabra reservada int 
        printf("El tamaño de memoria de un flotante  es %d bytes \n" , sizeof(float));
            // float es la palabra reservada para un número con punto decimal y/o exponente  
        printf("El tamaño de memoria de un doble percision   es %d bytes\n" , sizeof(double)); 
            // double es un punto decimal pero con lás cifras significativas o mayor valor posible en el exponente 
        printf("El tamaño de memoria de un doble precision largo  es %d bytes\n" , sizeof(long double));
        printf("El tamaño de memoria de un caracter  es %d bytes\n" , sizeof(char));
            // char es la palabra reservada para un caracter (letra)
        printf("El tamaño de memoria de un booleano  es %d bytes\n" , sizeof(bool));
            // los booleanos son un tipo de dato lógico, generalmente representan verdadero(1) o falso (0)
        printf("El tamaño de memoria de un void  es %d bytes\n" , sizeof(void));
            // void funciona como su nombre lo dice es para indicar vacio
                    //se puede usar ya sea que una función no toma nada, no devuelve nada, o como un puntero a datos de tipo desconocido
        printf("El tamaño de memoria de un entero con signo  es %d bytes\n" , sizeof(signed int ));  
            // signed sirve para cuando el usuario va a colocar un signo en la variable
            //En este caso se está hablando de un entero con signo
        printf("El tamaño de memoria de un entero sin signo  es %d bytes\n" , sizeof(unsigned int )); 
            // unsigned sirve para cuando la variable se va a utilizar solo positiva 
            //En este caso se está hablando de un entero que solo puede ser positivo
                    //Otras formas de utilizar signed y unsigned:
                        // printf("El tamaño de memoria de un doble presición con signo  es %d bytes\n" , sizeof(signed double ));
                        // printf("El tamaño de memoria de un doble presición sin signo  es %d bytes\n" , sizeof(unsigned ouble ));


return 0;

}