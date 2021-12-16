#include "fun_array.h"


int main(){
    int a[5]; //b[4], c[7];
    //array_read (a, 5);  // función para leer los arreglos // no es necesario agregar los corhetes 
   // array_read (b, 4);
   // array_read (c, 7);

    //array_print (a, 5);  
    //array_print (b, 4);
   // array_print (c, 7);

   // array_invert (a,5);
   // array_print (a,5);

   // array_max ( b,4);
   // array_print (b,4);

    array_read_ptr (&a, 5); //le estoy pasando la dirección de memoria de a
    array_print_ptr (a, 5); //lo mismo qe arriba 
    return 0;




}