#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *file;
    unsigned char buffer[2048]; //Buffer de 2 kbytes
    int bytesLeidos;
    if (argc < 2){
        printf("Falta nombre del archivo");
        return 1;
    }
    file = fopen(argv[1], "rb");

    if(!file) //file Si el negado de file es nulo se abre el archivo en caso de que e
    {
        printf("Error al abrir el archivo %s\n", argv[1]);
        printf("El archivo no existe o no se tienen los permisos de lectura\n");
        return 1;
    }

    printf("El archivo se abrió correctamente\n");
    bytesLeidos = fread(buffer, 1, 2048, file);
    while (bytesLeidos != 0)
    {
        fprintf("%s", buffer);
        bytesLeidos = fread(buffer, 1, 2048, file);
    }
    int res = fclose(file); //Al comentar las líneas 17 y 18 no se cierra el archivo pero no pasa a mayores 
    printf("\nfclose = %d\n", res);
    
    return 0;
}