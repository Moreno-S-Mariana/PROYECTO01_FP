#include <stdio.h>

int main(){
    int x ,y;
    x=7;
    printf ("%d\n",x);
    y=x++;
    printf("%d\n",y );
    printf("x=%d\n",x);
    return 0;
}
//Incremento unitario 
// es un operador de post incremento, asigna el valor a y y despues de asignarlo hace el incremento