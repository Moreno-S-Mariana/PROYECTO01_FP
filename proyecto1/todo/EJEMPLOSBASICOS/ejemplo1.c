#include <stdio.h>

int main(){
    char c ;
    do{
        fflush(stdin); //para limpiar el buffer de la entrada 
        printf("ingresa un caracter\n ");
        scanf("%c", &c);
        getchar();
    }
while (c!='a' && c!='e' && c!='i' && c!='o' && c!='u');

printf ("La primera vocal es: %c \n", c);
return 0 ;
}