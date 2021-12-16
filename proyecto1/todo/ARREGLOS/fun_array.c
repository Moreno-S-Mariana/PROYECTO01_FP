#include "fun_array.h"


void array_read (int a[], int n)
{
    for (int i=0; i<n; i++) // el arreglo tiene n elementos 
    {
        printf ("Ingresa el valor del elemento %d\n",i+1);
        scanf("%d",&a[i] );
    }
}


void array_print (int a[], int n)
{
    printf("[");
    for (int i=0; i<n; i++) // el arreglo tiene n elementos 
    {
        printf ("%d",a[i]);
    }
    printf("]\n");
}


void array_invert(int a[],int n)
{
    int temp;
    for (int i=0 , j=n-1 ; i<(n/2); i++ , j--)
    
    {
        //SON VARIABLES DE REFERENCIA QUE SE PODRIAN CONCIDERAR COMO VARIABLES DE ENTRADA Y DE SALIDA 
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    array_print (a,n);
}


int array_max (int a[], int n)
{
    int max= a[0];
    for( int i=1; i<n; i++)  // si empiezo con cero comparo con el mismo número 
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d \n", max);
    return max;
}


// con apuntadores 

void array_read_ptr (int *a, int n)
{
    for (int i=0; i<n; i++) // el arreglo tiene n elementos 
    {
        printf ("Ingresa el valor del elemento %d\n",i+1);
        scanf("%d",(a+i) );
    }
}


void array_print_ptr (int *a, int n)
{
    printf("[");
    for (int i=0; i<n; i++) // el arreglo tiene n elementos 
    {
        printf ("%d",*(a+i));
    }
    printf("]\n");
}