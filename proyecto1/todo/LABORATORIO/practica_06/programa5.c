#include <stdio.h>

/*
*

este programa ilustra el uso del operador + =

*
*/

int main (){
    int x,y;
    x=6;
    printf("x=%d\n", x);
    y=4;
    printf("y=%d\n", y);  

    // OPERADOR DE ASIGNACIÓN 
    x += 5; // x=x+5
    printf("x=%d\n", x);
    x+=y; // x=x+y
    printf("x=%d\n", x);


return 0;
}