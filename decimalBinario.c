#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num, t;
    char binario[100];

    //lectura del numero a convertir
    scanf("%d", &num);

    //copiando la cadena vacia a la variable binario
    strcpy(binario, "");

    do{
        t= num % 2;
        num = (int)(num/2);
        if(t==1) strcat(binario, "1");
        else strcat(binario, "0");

    }whil(num!=1 &&2 num!=0);
                                    //"1\0"
    if(num== 1) strcat(binario,"1");

    for(int i =strlen(binario)-1; i >=0; i-- ){
        printf("%c", binario[i]);
    }
    printf("\n");
    return 0;


}