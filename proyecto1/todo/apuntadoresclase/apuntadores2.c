#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// variable anonimas 

int main (){
    char *str =NULL ; // apuntador que apunta a null
    char str2 [10];
    char c;

    sprintf (str2, 12345678, 10); // sprintf es para concatenar numeros 
    strcmp(str, str2); //comparar las dos cadenas 

    str =&c;
    str =NULL;
    str = (char*)malloc (sizeof(char)); // guardar en heap una variable anónima diciendole a malloc que tamaño se reduiere para guardar un char
    // malloc es una funcion de stdlib para poder  reservar  memoria
    //str=""/ es un error para copiar 
    strcpy(str, "");// copia en la cadena vacia
    //str =str+c es para concatenar pero esta mal
    //concatenar "" cadena /´´ caracter
    // strcat cambia el tamaño del apuntador 
    strcat(str, "h");
    strcat(str, "o");
    strcat(str, "l");
    strcat(str, "a");
    strcat(str, "mundo");
    printf("La cadena es: %s\n", str);
    free(str);//Libera la memoria apuntadad por str si no se libera la memoria quedan lagunas en la computadora 
    printf("La longitud de la cadena es %d \n", strlen(str));
    free (str);
    str = NULL ; // Sin str omite la variable, se pierde la referencia a una variable anónima 
// variables anonimas es cuando no  sabemos cuanta memoria se va a usar 
// apuntadores sirven para ir reservando meoria poco a poco, no hay desperdicio de memoria 
return 0 ;
}