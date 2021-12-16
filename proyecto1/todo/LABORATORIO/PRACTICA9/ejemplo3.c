#include <stdio.h>
#include <stdlib.h>

// Mostrar la direcció para el arreglo es igual a la diección del primer elemento de mismo arreglo
    // Va a ir de cuatro en cuatro la ubicación ya que se ocupan bytes solo que está en hexadecimal 

int main(){
    int array [5] ={ 10,15,12,9,5};

    printf(" La dirección del arreglo es : %p\n", &array);

    for (int i=0; i<5; i++)
    {
        printf ("La dirrección del elemento %d del arreglo: %p \n ", i, & array[i]);
    }



    return 0;

}