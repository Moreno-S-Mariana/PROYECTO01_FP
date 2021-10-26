#include <stdio.h>
#include <stdbool.h>

//proceso de casteo de las variables cuando se va de cierto tipo de variable a otra 

int main (){
    int x;
    float v;

    x=4.5+3;
    v=4.5+3;

    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    x=4.5-3;
    v=4.5-3;

    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    x=4.5*3;
    v=4.5*3;
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=4*3;
    printf("el valor de v es:%5.2f \n",v);

    x=4/3;
    printf("el valor de x es:%d \n",x );

    x=4.0/3.0;
    v=4/3;
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=4.0/3;
    printf("el valor de v es:%5.2f \n",v);

    v=(float)4/3;
    printf("el valor de v es:%5.2f \n",v);

    v=((float)5+3)/6;
    printf("el valor de v es:%5.2f \n",v);

    x=15%2;
    v=(15%2)/2;
    printf("el valor de x es:%d \n",x );
    printf("el valor de v es:%5.2f \n",v);

    v=((float)(15%2))/2;
    printf("el valor de v es:%5.2f \n",v);

    return 0;
}