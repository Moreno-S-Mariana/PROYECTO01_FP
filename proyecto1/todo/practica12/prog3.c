#include <stdio.h>

// CON LA RUTA ABSOLUTA PUEDO ABRIR LO QUE SEA
//este programa muestra como escribir una cadena en un archvo de texto plano

int main (int argc, char *argv [])
{
    FILE *file;
    char string[] ="Este programa muestra como escribir una cadena detexto en un archivo de texto plano \n 123.45 \n";
    if (argc <2)
    {
        printf("Falta nombre del archivo");
        return -1;
    }
    file =fopen (argv[1], "r");
  // si no cierro un archivo de otra forma el texto no se va a escribir nada 
    if (file !=NULL)
    {
        printf("El archivo se abrio correctamente \n ");
        fputs(string, file);
        int res= fclose(file );
        printf ("\n fclose =%d \n ", res);
    }
    else
    {
        printf("Error al abrir el archivo %s \n ", argv [1]);
        printf("El archivo no existe o no se tienen los permisos de lectura \n ");
    }
    return 0;
}