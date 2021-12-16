#include <stdio.h>
#include <stdlib.h>

// El programa solo funciona de c99 en adelante 

int main(){
    int tamA;
    int *ptr_array; 
    printf(" Cuántos elementos forman el arreglo? \n  ");
    scanf("%d", &tamA);
    ptr_array=(int*) malloc (tamA*sizeof(int)); // es decir le digo a malloc que quiero que almacene mamA por el tamaño de memoria de un entero

    for (int i=0; i < tamA; i++)
    {
        printf("Ingresa el valor para el elemento %d \n ", i );
        scanf ("%d", &ptr_array [i]);
    }

    printf ("[");  
    for (int i =0; i< tamA; i++ ) 
    {
        printf("%d", *(ptr_array[i]);
    }
    printf("]\n");

    free (ptr_array); //liberar la memoria que le asigne al apuntador
    ptr_array =NULL; // Para apuntar a null
    return 0;

}