#include <stdio.h>
#include <stdbool.h>
#define btos(x) ((x)?"true":"false")
#define X=345
// libreria para booleanos 
//define define cosas, asigna un valor y al pasar al preprocesador el valor que se meta cambia a el valor que pide 
//programa para declarar diferentes tipos de variables 
//Las declaraciones de variables no pueden iniciar con un número pero si pueden empezar con letra mayuscula, minuscula y con un guion bajo
//Las variables se llaman identificadores 
// El mismo formato de escritura lo utilizamos para lectura en el por ejemplo %e 
// para imprimir un booleano se utiliza %
int main()
{
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
    _uint =65535; // num más grande en el que se puede representar unsigned int 
    Sint=-32768;   // num más grande en el que se puede representar signed int 
    flotante = 3.4E+38; // los numeros flotantes se pueden representar con notación científica 
    doble = 1.7e308;
    doblelargo=1.7e308 ;// num mas grande para long double
    car = 127; //car A
    corto= 12;
    b= true;

    printf("Valor entero: %d \n", ent);
    printf("Valor entero con signo: %i \n", Sint);
    printf("Valor entero sin signo: %u \n", _uint);
    printf("Valor entero sin signo en octal: %o \n", _uint);
    printf("Valor entero sin signo en hexadecimal: %x \n", _uint);
    printf("Valor entero: %ld \n", largo);
    printf("Valor cadena: %s \n", "esto es una cadena");

    printf("Valor entero: %d \n", corto);
    printf("Valor entero con signo: %i \n", corto);
    printf("Valor entero sin signo: %u \n", corto);
    printf("Valor entero sin signo en octal: %o \n", corto);
    printf("Valor entero sin signo en hexadecimal: %x \n", corto);


    printf("Valor flotante: %f \n", flotante);
    printf("Valor flotante: %5.5f \n", flotante);
    printf("Valor flotante: %5.2f \n", flotante);
    printf("Valor flotante: %e \n", flotante);
    printf("Valor flotante: %g \n", flotante);

    printf("Valor flotante: %lf \n", doble); //normal
    printf("Valor flotante: %5.5f \n", doble);
    printf("Valor flotante: %5.2f \n", doble);
    printf("Valor flotante: %3.1e \n", doble);//representalo con solo 3 numeros con solo un decimal
    printf("Valor flotante: %g \n", doble);

    printf("Valor flotante: %lf \n", doblelargo); //normal
    printf("Valor flotante: %5.5f \n", doblelargo);// 5 enteros 5 decimales
    printf("Valor flotante: %5.2f \n", doblelargo);// 5 degitos de los cuales dos son decimales 
    printf("Valor flotante: %ef \n", doblelargo); //notacion cinetifica
    printf("Valor flotante: %g \n", doblelargo);// representa exponencial sin 0

    printf("Valor caracter: %c \n", car);
    printf("Valor caracter: %d\n", car);

    printf("Valor bool: %s \n", btos(b));
    printf("Valor bool: %d\n", b);

    return 0;

}