#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *file;
    char string[50];
    if (argc < 2){
        printf("Falta nombre del archivo");
        return -1;
    }
    file = fopen(argv[1], "r");

    if(file != NULL) //file Si el negado de file es nulo se abre el archivo en caso de que e
    {
        printf("Error al abrir el archivo %s\n", argv[1]);
        printf("El archivo no existe o no se tienen los permisos de lectura\n");
    }
    else
    {
        printf("El archivo se abrió correctamente\n");
        fprintf(file, string);
        fprintf(file, "%s", "Facultad de ingeniería, UNAM\n");
        int res = fclose(file); //Al comentar las líneas 17 y 18 no se cierra el archivo pero no pasa a mayores 
        printf("\nfclose = %d\n", res);
    }
    return 0;
}