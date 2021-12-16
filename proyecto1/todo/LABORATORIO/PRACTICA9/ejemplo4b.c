#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5]= { 1,2,3,4,5 };
    int *ptr_array = &array;

    for (int i=0; i<5; i++)
    {
        printf("%d", ptr_array[i]);
    }
    printf("\n"); 

    // este for hace lo mismo que el de arriba pero con una propiedad de los apuntadores 
    for (int i=0; i<5; i++)
    {

        printf("%d", *(ptr_array +i )); // quiero el contenido de la dirección de memoria apuntada 

    }

    return 0;

}