#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    for (i=0; i<argc; i++)
        printf("%s argumento argv [%d] \n ", argv[i],i);
    return 0;

}