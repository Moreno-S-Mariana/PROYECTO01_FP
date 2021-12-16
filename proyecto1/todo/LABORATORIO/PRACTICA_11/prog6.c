#include <stdio.h>

void funcion ();

int main()
{
    for (int j=0; j<5; j++)
    {
        funcion ();
    }

}

void funcion()
{
    static int veces=0;
    //STATIC EN UNA FUNCION HACE QUE EL VALOR DE LA VARIABLE SE ALMACENE EN LA MEMORIA DESDE LA CREACION DURANTE TODA LA EJECUCION DEL PROGRAMA LO QUE QUIERE DECIR QUE SU VALOR SE VA A MANTENER HASTA QUE EL PROGRAMA LLEGUE A SU FIN 
    int num=0;
    printf("Valor de la variable local  %d \n ", ++ num); 
    printf("Esta funcion se ha llamado %d veces \n ", ++ veces );
}