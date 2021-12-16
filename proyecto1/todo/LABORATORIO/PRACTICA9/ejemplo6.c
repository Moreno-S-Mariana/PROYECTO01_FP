#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5]= { 1,2,3,4,5 };
    int *ptr_array = &array; // APUNTA A LA PRIMERA PARTE DEL ARREGLO 
    int *ptr_array2 = &array[2]; // APUNTA A CASI LA PARTE MEDIA DEL ARREGLO 
    
    

    for (int i=0; i<5; i++)
    {
        printf("%d", ptr_array[i]);
    }
    printf("\n");

    for (int i=0; i<5; i++)
    {

        printf("%d", *(ptr_array2 +i )); 

    }
    printf("\n");

    return 0;

}