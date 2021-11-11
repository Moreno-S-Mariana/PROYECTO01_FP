#include <stdio.h>
int main()
{
    int enteroNumAlumnos = 5;
    float realCalif = 0.0, realPromedio = 0.0;
    printf("\tPromedio de calificaciones\n");
    for (int indice = 0; indice < enteroNumAlumnos; indice++)//++ maneja un incremento en indice 
    
    {
        printf("\nIngrese la calificación del alumn %d\n", indice + 1);// indice mas uno para escribir que si habla del alumno 1
        scanf("%f", &realCalif);
        realPromedio += realCalif;
    }

    printf("\nEl promedio de las calificaciones ingresadas es: %f\n",
           realPromedio / enteroNumAlumnos);
    return 0;
}
// un arreglo es una variable que almacena multiples valores 
//no hay arreglo
