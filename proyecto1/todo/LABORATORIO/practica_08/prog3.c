#include <stdio.h>
int main()
{
    char op = 'n';
    double sum = 0, calif = 0;

    int veces = 0;
    do
    {
        printf("\tSuma de calificaciones\n");
        printf("Ingrese la calificación:\n");
        scanf("%lf", &calif);
        veces++; // cuenta cuantas calificaciones se ingresaron para sacar el promedio
        sum = sum + calif; // variable acumuladora 
        printf("¿Desea sumar otra? S/N\n");
        setbuf(stdin, NULL);
        // limpia el buffer del teclado
        // buffer es una memoria en la que se almacenan los caracteres que el usuario teclea 
        //|| es o        
        scanf("%c", &op);
        getchar(); // toma un caracter de la entrada estandar // es para leer un caracter 
    } while (op == 'S' || op == 's');
    printf("El promedio de las calificaciones ingresadas es: %lf\n", sum / veces);
    return 0;
}
// un do while si la condición es falsa se va a ejecutar por lo menos una vez 
//while se va a ejecutar solo si la condición es verdadera 
