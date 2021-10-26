// elaborar un algoritmo que permita calcular ek area y volumen de un cilindro

//entrada: altura radio que puede ser de las numero reales 
//salidas: area y el volumen valores reales 

//fórmula 
//  V=Pi *radio*radio*altura 
//  A= 2*pi*radio+2*pi*radio*altura
// factorizando la formula del area 
//A=2PI*radio(radio+altura)

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){ //main tambien recibe argumentos 
    float radio,altura;
    float area, volumen;
    printf("ingrese el valor del radio y la altura ");
    scanf ("%f %f", &radio, &altura );

    area= 2* M_PI *radio *(radio+altura);
    volumen= M_PI *radio*radio*altura;

    printf("el valor del area es : %f\n ", area);
    printf("el valor del volumen es : %f\n ", volumen);


}