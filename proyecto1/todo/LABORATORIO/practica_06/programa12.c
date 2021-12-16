#include <stdio.h>

int main(){
    int x, y;
    x=7;
    printf("x=%d\n",x);
    y= ++x;
    printf ("y =%d\n",y);
    printf("x=%d\n",x);
    return 0;
}
// es un operador de preincremento que primero hace el incremento y luego lo asigana 