/**
 * Se desea leer las calificaciones de una clase de fundamentos de programación y contar el número de aprobados ( 6 o mayor que 6);
 * 
 * entradas:
 *      cal: real
 *      n: entero, cantidad de calificaciones 
 * salidas:
 *      n: entero, en número de aprovados 
 * 
 * 1.Inicio
 * 2.   leer n
 * 3.   i<- 1  
 * 4.       mientras i<=n Hacer 
 * 5.           Leer cal       
 * 6.                 Si cal >= 6 Entonces  
 * 7.                     num<- num+1
 * 8.                 Fin si
 * 9.       i<- i+1
 * 10.      fin mientras 
 * 11.      Escribir "El número de aprobados es ", num
 * 12. Fin 
 */

#include <stdio.h>

int main()
{
    float cal;
    int n, i;
    int num=0;

    printf("Ingresa el número de calificaciones \n");
    scanf("%d", &n);
    i=0;
    while (i<n )
    {
        printf(" Ingresa la calificación \n ");
        scanf("%f", &cal);
        if (cal>=6.0) num ++;
        i++;
    }
    printf("El numero total de aprobados es %d \n", num);
    return 0;
    

}
