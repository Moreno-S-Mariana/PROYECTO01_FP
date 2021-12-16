#include "conversiones.h"
#include <string.h>
#include<stdlib.h>
#include <math.h>

int conv_binario_decimal (char *binario)
{
    int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }
    return num;
    }

char *conv_decimal_binario(int num)
{
    int t=0, i=0, j=0; //inicio las variables en 0 para eliminar basura     
    char *temp=NULL, *binario=NULL; // es prudente inicir los pauntadores siempre en 0 
    temp =(char*) malloc (sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(temp, "1");
        else strcat(temp, "0");//strcat manipula el tamaño del pauntador         
    }while(num!=1 && num!=0);

    if(num== 1) strcat(temp, "1");
    //return binario; Ya no es necesario el return

    binario=(char*)malloc(strlen(temp)*sizeof(char) );
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){ // control del ciclo form con mas de una variable y nos sirve para ordenar los numeros bien 
        binario[j] = temp[i];
        //
    }
    free (temp); //libero la memoria y temp quedo vacia pero no apunta a nulo 
    temp =NULL ;
    return binario;
} 
int conv_hexadecimal_decimal (char *hex)
{
     int num = 0, pot = 0;
    for(int i = strlen(hex)-1; i>=0; i--){
        switch(hex[i]){
            case '1':
                num += pow (16, pot);
                break;
            case '2':
                break;
            case '3':
            break;
            case '4':
            break;
            case '5':
            break;
            case '6':
            break;
            case '7':
            break;
            case '8':
            break;
            case '9':
            break;
            case 'A':
            break;
            case 'B':
            break;
            case 'C':
            break;
            case 'D':
            break;
            case 'E':
            break;
            case 'F':
            break;
        }while(num!=1 && num!=0);
         if(num== 1) strcat( temp , "1");
    //return binario; Ya no es necesario el return

    hex=(char*)malloc(strlen(temp)*sizeof(char) );
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){ // control del ciclo form con mas de una variable y nos sirve para ordenar los numeros bien 
        hex[j] = temp[i];
        //
    }
    void menu 
}