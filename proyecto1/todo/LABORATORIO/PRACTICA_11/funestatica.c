//############## funcEstatica.c ##############
#include <stdio.h>
int suma(int,int);
static int resta(int,int);
int producto(int,int);
static int cociente (int,int);
int suma (int a, int b)
{
    return a + b;
}
static int resta (int a, int b)
{
    return a - b;
}
int producto (int a, int b)
{
    return (int)(a*b);
}
static int cociente (int a, int b)
{
    return (int)(a/b);
}

//LAS VARIABLES ESTATICAS SOLO PUEDEN SER UTILIZADAS DENRO DEL PROGRAMA EN EL QUE FUERON DECLARADAS 
