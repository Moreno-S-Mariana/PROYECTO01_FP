#include <stdio.h>
int main()
{
// Los valores de una enumeración son enteros y constantes
// enum  otra forma de definir constante 
//enum es solo para constantes enteras
//const int LUNES=1  Otras forma de definir constantes 
// #define LUNES 1 por el preprocesador asi que cada vez que encuentre lunes lo va a cambiar por un uno 
    enum diasSemana
    {
        LUNES=1,
        MARTES,
        MIERCOLES,
        JUEVES,
        VIERNES,
        SABADO,
        DOMINGO
    };
    int op;
    printf("Ingrese el día de la semana.\n");
    printf("1) Lunes\n");
    printf("2) Martes\n");
    printf("3) Miércoles\n");
    printf("4) Jueves\n");
    printf("5) Viernes\n");
    printf("6) Sábado\n");
    printf("7) Domingo\n");
    scanf("%d", &op);
    switch (op - 1)
    {
    case LUNES:
    case MARTES:
        printf("Inicio de semana.\n");
        break;
    case MIERCOLES:
        printf("Mitad de semana.\n");
        break;
    case JUEVES:
        printf("¡Casi inicia el fin de semana!\n");
        break;
    case VIERNES:
    case SABADO:
        printf("¡Fin de semana!\n");
        break;
    case DOMINGO:
        printf("Día de descanso.\n");
        break;
        // No se necesita default
    }

    return 0;
}