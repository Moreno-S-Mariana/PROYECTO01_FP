#include <stdio.h>

// CON LA RUTA ABSOLUTA PUEDO ABRIR LO QUE SEA 

int main (int argc, char *argv [])
{
    FILE *file;
    if (argc <2)
    {
        printf("Falta nombre del archivo");
        return -1;
    }
    file =fopen (argv[1], "r");

    if (file !=NULL)
    {
        printf("El archivo se abrio correctamente \n ");
        int res= fclose (file );
        printf ("fclose =%d \n ", res);
    }
    else
    {
        printf("Error al abrir el archivo %s \n ", argv [1]);
        printf("El archivo no existe o no se tienen los permisos de lectura \n ");
    }
    return 0;
}