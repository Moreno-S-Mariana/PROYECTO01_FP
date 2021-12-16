#ifndef __FUNC_SRRAY_H__
#define __FUNC_SRRAY_H__
#include <stdio.h>

//todo lo que empieza con # es una directiva del preprocesadorn 

void array_read (int a[], int n); //recibe un arreglo de cualquier numero de elementos pero de solo una dimensión 
void array_print (int a[], int n);

// ELABORAR UNA FUNCIÓN QUE INVIERTA UN ARREGLO
void array_invert(int a[],int n);

//DEVUELVE EL MÁXIMO VALOR EN UNA ARREGLO
int array_max (int a[], int n);

//CN APUNTADORES
void array_read_ptr (int *a, int n); //recibe un arreglo de cualquier numero de elementos pero de solo una dimensión 
void array_print_ptr (int *a, int n);


#endif //!__FUNC_SRRAY_H__


