#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv){ //main tambien recibe argumentos      **argv es un apuntador que apunta a otro apuntador 
    float radio,altura;
    float area, volumen;

    if (argc <3){
        printf("Faltan argumentos\n");
        exit (-1);
    }

    radio=atof(argv[1]); //atof sorve para convertir de caracter a flotante 
    altura = atof(argv[2]);

    area= 2* M_PI *radio *(radio+altura);
    volumen= M_PI *radio*radio*altura;

    printf("el valor del area es : %f\n ", area);
    printf("el valor del volumen es : %f\n ", volumen);


}