#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char* String;
void Leer_Cadena(String *cadena);
void invertirCadena(String cadena);
char eqbin_oct(String subcadena);
int main(){
    String t_bin=NULL, sub_bin=NULL, oct=NULL; 
    int p=0, i=0, j=0, s=0;
    printf("-----PROGRAMA QUE CONVIERTE DE DECIMAL A BINARIO-----\n");
    printf("Dame tu binario: ");
    Leer_Cadena(&t_bin);
    //bin=(String)malloc(strlen(t_bin)*sizeof(char));
    invertirCadena(t_bin);
    switch (strlen(t_bin) % 3)
    {
    case 2:
        strcat(t_bin,"0");
        break;
    case 1:
        strcat(t_bin,"00");
        break;
    }
    printf("%s\n",t_bin);
    s=strlen(t_bin)/3;
    oct=(String)malloc(s*sizeof(char));//memoria
    sub_bin=(String)malloc(4*sizeof(char));//4 porque no se si tambien se icluye el caracter '\0'
    while (t_bin[i] != '\0')
    {
        if(p==2){
            strncpy(sub_bin, &t_bin[i-2],3); //Crecion de subcadenas
            oct [j]=eqbin_oct(sub_bin);
            printf("%s\n",sub_bin);
            j++;
            p=0;
        }
        i++;
        p++;
    }
    free(sub_bin);

    printf("El octal es: %s", oct);
    //free(t_bin);
    free(oct);
    return 0;
}
void Leer_Cadena(String *cadena){
    char car; //Variable que almacena caracter por caracter de una cadena
    int i; //Variable controladora 
    String temporal=NULL; //Variable temporal de global

    if (*cadena != NULL){     //Esta cadena que recibe la es basura ya que aun 
        free(*cadena);         //no le hemos dado algun valor por eso liberamos y apuntamos
        (*cadena)=NULL;         //a nulo
    }
    i=1;
    while((car=getchar()) != '\n'){ //La fuincion getchar lee un caracter desde el teclado
        temporal=(String)realloc(temporal,(i+2)*sizeof(char));//Apartando memoria
        if(temporal==NULL){
            printf("Memoria insuficiente");
            exit(EXIT_FAILURE);
        }
        temporal[i-1]=car;//Insertamos nuestro caracter
        temporal[i]='\0'; //Reservamos memoria igual a i+2 porque un espacio es para el 
                          //siguiente caracter y el caracter de final de linea
        i++;
    }
    if (temporal==NULL){   //Por si el usuario  tecle solo enter
        *cadena=(String)realloc((*cadena), 5*sizeof(char));
        strcpy((*cadena),"NULO");
    }
    else{
        *cadena=(String)realloc((*cadena),(strlen(temporal)+1)*sizeof(char));
        strcpy((*cadena),temporal);
    }
    free(temporal);
}
void invertirCadena(String cadena){
    int longitud = strlen(cadena);
    int i;
    for (i = 0; i < strlen(cadena) / 2; i++)
    {
        char temporal = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temporal;
    }
}
char eqbin_oct(String subcadena){
    if (strcmp(subcadena,"000")==1)
    {
        return '0';
    }
    if (strcmp(subcadena,"100")==1)
    {
        return '1';
    }
    if (strcmp(subcadena,"010")==1)
    {
        return '2';
    }
    else if (strcmp(subcadena,"110")==1)
    {
        return '3';
    }
    else if (strcmp(subcadena,"001")==1)
    {
        return '4';
    }
    else if (strcmp(subcadena,"101")==1)
    {
        return '5';
    }
    else if (strcmp(subcadena,"011")==1)
    {
        return '6';
    }
    else if (strcmp(subcadena,"111"))
    {
        return '7';
    }
}