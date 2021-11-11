/**
 * 
 * Programa que nos muestra el uso de los diferentes operadores aritméticos con diferentes tipos de variables 
 * 
 * */

#include <stdio.h>
#include <stdbool.h>

//Proceso de casteo es en el que se prueban diferentes variables hasta llegar a la que necesitamos 

int main (){
    //  Declaración de variables 
    int x;
    float v;

    // OPERADOR DE SUMA 
    x=4.5+3; // Al usar un valor decimal en x que se declaró como entero solo nos va a imprimir el entero resultante 
    v=4.5+3; // Al usar un valor decimal en v que se declaró como decimal, nos va a imprimir el valor completo 

    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    // OPERADOR DE RESTA 
    x=4.5-3;
    v=4.5-3;

    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    // OPERADOR DE MULTIPLICACIÓN 
    x=4.5*3;
    v=4.5*3;
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=4*3;
    printf("el valor de v es:%5.2f \n",v);

    // OPERADOR DE DIVISIÓN  
    x=4/3;
    printf("el valor de x es:%d \n",x );

    x=4.0/3.0;
    v=4/3; // Como ambos valores de la división entera son enteros, nos regresa un entero
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=4.0/3; // Como uno de los valores es decimal, regresa un decimal 
    printf("el valor de v es:%5.2f \n",v);

    // DIVISIÓN CON JERARQUÍA 
    v=(float)4/3; // El (float) sirve para que aun que sean enteros, nos regrese un decimal
    printf("el valor de v es:%5.2f \n",v);

    v=((float)5+3)/6;
    printf("el valor de v es:%5.2f \n",v);

    // OPERADOR DE MÓDULO
    x=15%2;
    v=(15%2)/2;
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=((float)(15%2))/2;
    printf("el valor de v es:%5.2f \n",v);

    return 0;
}