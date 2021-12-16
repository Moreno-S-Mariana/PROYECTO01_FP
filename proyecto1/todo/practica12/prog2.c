#include <stdio.h>

// CON LA RUTA ABSOLUTA PUEDO ABRIR LO QUE SEA 

int main (int argc, char *argv [])
{
    FILE *file;
    char string [50];
    if (argc <2)
    {
        printf("Falta nombre del archivo");
        return -1;
    }
    file =fopen (argv[1], "r");

    if (file !=NULL)
    {
        printf("El archivo se abrio correctamente \n ");
        printf("El contenido del archivo es :\n ");
        while (feof(file) ==0)
        {
            fgets(string ,50, file );// donde lo quiero guardar cuantos caracteres y cual es el archivo 
            printf("%s", string);
        }
        int res= fclose (file );
        printf ("\n fclose =%d \n ", res);
    }
    else
    {
        printf("Error al abrir el archivo %s \n ", argv [1]);
        printf("El archivo no existe o no se tienen los permisos de lectura \n ");
    }
    return 0;
}