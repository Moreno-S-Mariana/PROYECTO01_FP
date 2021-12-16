#include <stdio.h>
//%d, %i,%u para enteros
//en lenguJE C NO EXISTE UN OPERADOR PARA LA DIVISION ENTERA PERO EN ESTEPROGRAMA ASIGNA VALORES ENTEROS POR SER VARIABLES ENTERAS 

int main(){
    int x, y;
    x=25;
    printf("x=%i\n ", x);
    y=3;
    printf("y=%i\n ", y);
    x/=4;
    printf("x=%i\n ", x);
    x/=y;
    printf("x=%i\n ", x);
    return 0;

}