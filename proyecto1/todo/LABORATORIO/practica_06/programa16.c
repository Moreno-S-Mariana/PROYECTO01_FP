#include <stdio.h>

int main(){
    int x,y,v,z;
    x= (v=3, v *5);
    printf("x=%d, v=%d\n", x, v);//v=3; x=v*5
    x=(v+=5, v%3);
    printf("x=%d, v=%d\n", x, v);// v=v v+5; x=%3
    x=(y=(15>10), z=(2>=y), y&&z);
    printf("x=%d, y=%d, z=%d\n" ,x, y, z);//x=(15>10); z=(z>=y); x=y&&z
    return 0;

}

// el operador de coma nos sirve para abreviar una serie de operaciones es decir deja hacer mas de una operacion 
// sirve para separar un lista de operaciones 