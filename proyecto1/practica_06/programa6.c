#include <stdio.h>

/*
*

este programa ilustra el uso del operador -=

*
*/

int main (){
    int x,y;
    x=10;
    printf("x=%d\n", x);
    y=5;
    printf("y=%d\n", y);
    x -= 3; // x=x-3
    printf("x=%d\n", x);
    x-=y;
    printf("x=%d\n", x);


return 0;
}