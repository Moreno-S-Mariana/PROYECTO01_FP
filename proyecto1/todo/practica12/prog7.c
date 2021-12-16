#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fileIN, *fileOUT;
    unsigned char buffer[2048]; //Buffer de 2 kbytes
    int bytesLeidos;
    if (argc < 3)
    {
        printf("El programa se debe ejecutar de la siguiente manera:\n");
        printf("\tnombre_programa archivo_origen archivo_destino\n");
        return 1;
    }
    fileIN = fopen(argv[1], "rb");

    if(!fileIN) //file Si el negado de file es nulo se abre el archivo en caso de que exista
    {
        printf("Error al abrir el archivo %s\n", argv[1]);
        printf("El archivo no existe o no se tienen los permisos de lectura\n");
        return 1;
    }

    fileOUT = fopen(argv[2], "wb");
    if(!fileOUT)
    {
        printf("Error al abrir el archivo %s\n", argv[2]);
        fclose(fileIN);
        return 1;
    }
    bytesLeidos = fread(buffer, 1, 2048, fileIN);
    while (bytesLeidos != 0)
    {
        fwrite(buffer, 1, bytesLeidos, fileOUT);
        bytesLeidos = fread(buffer, 1, 2048, fileIN);
    }
    fclose(fileIN);
    fclose(fileOUT);
    return 0;
}