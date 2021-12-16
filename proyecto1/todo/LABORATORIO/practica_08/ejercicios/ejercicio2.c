#include <stdio.h>
#include <stdlib.h>

main(){
    int x;
    int y, suma=0;
    printf("Ingresa el número al que llegará la suma\n");
    scanf("%d", &y);
    for(x=1; x<=y; x++){
    
        suma=suma+x;
    
    }
    printf("La suma de 1 hasta %i", y );
    printf(" es de : \n" );
    printf("%i", suma);

}
