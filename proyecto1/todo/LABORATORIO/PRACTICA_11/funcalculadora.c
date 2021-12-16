//############## calculadora.c ##############
#include <stdio.h>
int suma(int,int);
    //static int resta(int,int);
int producto(int,int);
    //static int cociente (int,int);
int main()
{
    printf("5 + 7 = %i\n",suma(5,7));
        //printf("9 - 77 = %d\n",resta(9,77));
    printf("6 * 8 = %i\n",producto(6,8));
        //printf("7 / 2 = %d\n",cociente(7,2));
}