#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

// TODO PROGRAMA SOLO CONTIENE UN FUNCION MAIN 
        //Todo aquello que no se mande llamar en main no se va a ejecutar 

float f(float x){ // tipo de resultado // f es el nobre de la funcion  // float x son los parametros ( se declaran las variables) 
    return (1/(1+x*x));
}

int main (){
    float a,b;
    printf("Ingresa un valor para x \n");
    scanf("%f", &a);
    b=f(a); //esta es la llamada a la funcion, no tiene el tipo del valor a retornar, los parametros tampoco tienen al tipo de parametro 
    printf("el valor de f(%f)=%f \n", a, b);

    b=tang (a);
    printf("El valor de tan (%f)=%f\n ",a,b);
    return 0;
}