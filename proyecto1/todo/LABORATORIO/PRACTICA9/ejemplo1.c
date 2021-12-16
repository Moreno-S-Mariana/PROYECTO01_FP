#include <stdio.h>
#include <stdlib.h>

int main(){
    int array [5] ={ 10,15,12,9,5}; // se declara el arreglo, lo que está entre llaves son los valores que se le asigna 
    int array2[]={1,3,4,5,6,9,10,11};// Los corchetes se úeden quedar vacios por u del lado derecho se indican cuantos valores le caben 
    int j=0, k=3, z=6;
        //para expresarlo como una lista 
    printf ("[");  //para mostrarlos en pantalla al usuaruio
    for (int i =0; i<5; i++ ) //ciclo para impreimir el arriglo va de  a n-1
    {
        printf("%d", array[i]);
    }
    printf("]\n");

    

    return 0;

}