#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    FILE *file;
    bool is_letter;
    int c;
    int lineas = 0, palabras = 0, caracteres = 0;
    if (argc < 2)
    {
        printf("Falta nombre del archivo");
        return -1;
    }
    file = fopen(argv[1], "r");

    if (!file)
    {
        printf("El archivo no existe o no se tienen los permisos suficientes\n");
        return 1;
    }
    c = fgetc(file);
    while (c != EOF)
    {
        if (isalnum(c))
        {
                is_letter==true;
                caracteres++;
            if (c == '\n')
            {
                lineas++;
                caracteres++;
                continue;
            }
        }
        else if (isblank(c))
        {
            if (is_letter == true)
            {
                palabras++;
                is_letter = false;
            }
            caracteres++;
        }
        else if (c == '\n')
        {
            lineas++;
            caracteres++;
            if (is_letter == true)
            {
                palabras++;
                is_letter = false;
            }
        }
        c = fgetc(file);
    }

    printf("\t%d\t%d\t%d\t%s\n", lineas, palabras, caracteres, argv[1]);
    return 0;
}