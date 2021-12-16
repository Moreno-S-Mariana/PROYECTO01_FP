/**
 * 
 * Programa para declarar diferentes tipos de variables 
 * Notas: 
 *         - Las declaraciones de variables no pueden iniciar con un número pero si pueden empezar 
 *           con letra mayuscula, minuscula y con un guion bajo.
 *         - Los nombres de las variables se llaman identificadores 
 *         - Es importante resaltar que tanto para imprimir como para leer variables se utiliza el mismo 
 *           formato de % por ejeplo tanto para imprimir como para leer enteros se utiliza el "%d" o "%i"
 * 
 * */


#include <stdio.h>
#include <stdbool.h>  
        // Libreria para booleanos

#define btos(x) ((x)?"true":"false")
        // "#define"  como su nombre lo dice define cosas
        // En este caso el define es un operador ternario 
            //En esta función el btos es para convertir de booleanos a cadena 
            /** 
              * Lo que nos dice la función:
             *   (x)? Es la condición, en este caso pregunta si x es diferente de cero
             *   "true": "false"  Si se cumple, sera true, si no se cumple será false 
             *  
             * */

#define X=345 
        // Asigna un valor y al pasar al preprocesador el valor que se ingrese cambia a el valor especificado 

int main()
{
        // Declaración de variables 
    int ent;
    long largo;
    float flotante;
    double doble;
    long double doblelargo; 
    char car;
    signed int Sint;
    unsigned int  _uint;
    short corto;
    bool b;

    ent =14; largo = -2147483648 ;
    _uint =65535; 
        // número más grande en el que se puede representar unsigned int 
    Sint=-32768;   
        // número más grande en el que se puede representar signed int 
    flotante = 3.4E+38; 
        // número flotante se pueden representar con notación científica 
        // número flotante más grande en el que se puede representar float
    doble = 1.7e308;
        // número flotante más grande en el que se puede representar double
    doblelargo=1.7e308 ;
        // número más grande para long double
    car = 127; 
        //Un caracter es por ejemplo "a"
        // El rango en valores binarios que es posible que se tome es 127
    corto= 12;
        // Se le asigna a short el valor de 12 que es el máximo que puede tomar 
    b= true;
        // A b que fue definida como variable de tipo booleano se le asigna true o verdadero
        // true tambien se puede interpretar como 1

//Imprime los valores que se le asignaron a las variables 
    printf("Valor entero: %d \n", ent);
    printf("Valor entero con signo: %i \n", Sint);
    printf("Valor entero sin signo: %u \n", _uint);
    printf("Valor entero sin signo en octal: %o \n", _uint);
    printf("Valor entero sin signo en hexadecimal: %x \n", _uint);
    printf("Valor entero: %ld \n", largo);
    printf("Valor cadena: %s \n", "esto es una cadena");

//Se demuestra que se puede utilizar para enteros %d y %i 
    printf("Valor entero: %d \n", corto);
    printf("Valor entero con signo: %i \n", corto);
// Se le quita el signo a la variable corto con el %u ya que es de unsigned 
    printf("Valor entero sin signo: %u \n", corto);
//% o para escribir el valor asignado a la variable corto en su base octal
    printf("Valor entero sin signo en octal: %o \n", corto);
//% x para escribir el valor asignado a la variable corto en su base hexadecimal
    printf("Valor entero sin signo en hexadecimal: %x \n", corto);

//% f para escribir flotantes 
    printf("Valor flotante: %f \n", flotante);
//% 5.5 f en este caso el 5.5 limita el valor a 5 números antes del punto y 5 números despues del punto 
    printf("Valor flotante: %5.5f \n", flotante);
//% 5.2 f en este caso el 5.2 limita el valor a 5 números antes del punto y 2 números despues del punto 
    printf("Valor flotante: %5.2f \n", flotante);
//% e para escribir el valor asignado en forma exponencial
    printf("Valor flotante: %e \n", flotante);
//% g para escribir el valor asignado en forma exponencial o flotante abreviada 
//%g representa al exponencial sin cero
    printf("Valor flotante: %g \n", flotante);

    printf("Valor flotante: %lf \n", doble); //normal
    printf("Valor flotante: %5.5f \n", doble);
    printf("Valor flotante: %5.2f \n", doble);
    printf("Valor flotante: %3.1e \n", doble);//representa con solo 3 numeros con solo un decimal
    printf("Valor flotante: %g \n", doble);

    printf("Valor flotante: %lf \n", doblelargo); //normal
    printf("Valor flotante: %5.5f \n", doblelargo);// 5 enteros 5 decimales
    printf("Valor flotante: %5.2f \n", doblelargo);// 5 degitos de los cuales dos son decimales 
    printf("Valor flotante: %ef \n", doblelargo); //notacion cinetifica
    printf("Valor flotante: %g \n", doblelargo);// representa exponencial sin 0

// visualización para caracteres 
    printf("Valor caracter: %c \n", car);
    printf("Valor caracter: %d\n", car);

// visualización para booleanos en forma de cadenas de caracter 
    printf("Valor bool: %s \n", btos(b));
// visualización para booleanos en forma de enteros 
    printf("Valor bool: %d\n", b);

    return 0;

}