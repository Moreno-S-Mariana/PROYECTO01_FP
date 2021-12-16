#include <stdio.h>
#define btoa(x) (x)? "true": "false" // va a preguntar si x es verdadero

int main(){

    printf ("%s\n", btoa(!(7<15))); 
    printf ("%s\n", btoa(!0));  
    printf ("%s\n", btoa((35>20)&&(20<=23)));//and o y conjuncion 
    printf ("%s\n", btoa(0&&1));
    printf ("%s\n", btoa((35>20)||(20<=18))); 
    printf ("%s\n",btoa(0||1) ); //or u o disyuncion

    return(0);

}

// 0 es falso 1 es verdadero