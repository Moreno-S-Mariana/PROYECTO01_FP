#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#ifdef WINDOWS
#include<windows.h>
#endif

// strlen es para ver longitud de cadenas 

int main()
{
    int a=0;
    int *p =NULL; // null es para eliminar la basura del apuntador 

    setlocale(LC_ALL, "spanish");
    #ifdef WINDOWS
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    #endif 

    printf("La dirección de memoria de p %p\n" , &p);
    printf ("El tamaño en bytes del apuntador %d \n ", sizeof (int*)); // size of es para ver el tamaño de cualquier cosa 
    printf("La dirección de memoria apuntada %p \n",p);

    p = & a ;

    printf("La dirección de memoria de p %p\n" ,& p);
    printf("La dirección de memoria de a %p\n" ,  &a);
    printf ("El tamaño en bytes del apuntador %d \n ", sizeof (int*));
    printf("La dirección de memoria apuntada %p \n",p);

    a=12;

    printf ("El valor apuntado por p %d\n", *p);


    return 0;




}