#include<stdio.h>

int main(){
    int decimal,binario[9],i;
    printf("Este programa transforma un numero decimal dado a uno binario\n");
    printf("Escriba el numero decimal a convertir: ");
    fflush(stdin);
    scanf("%d",&decimal);
    i=0;
    while(i<10){
        binario[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("El numero %d en binario es: ",decimal);
    for(i=8;i>0;i--){
        printf("%d",binario[i]);
    }
    return 0;
}
