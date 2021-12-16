#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <stdlib.h>
#include <stdio.h> 

void mat_read_3 (float mat [][3], int n );
//cuando el arreglo comienza a crecer en dimensiones ya no se puede hacer tan generico, hay que especificar que por que es
void mat_read_4 (float mat [][4], int n );
void mat_read (float **mat , int n,int m);
// forma de leer un arreglo de forma mucho mas generica 

float **mat_create (int n, int m);
void mat_delete (float **mat , int n);

#endif
