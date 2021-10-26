#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "conversiones.h"

int main(){
    int menu, num;
    char *binario, *hex, *octal;

    printf ("Para convertir de binario a decimal pulsa 1 \n ");
    printf ("Para convertir de decimal a binario pulsa 2 \n ");
    printf ("Para convertir de decimal a hexadecimal pulsa 3 \n ");
    printf ("Para convertir de hexadecimal a decimal pulsa 4 \n ");
    printf ("Para convertir de octal a decimal pulsa 5 \n ");
    printf ("Para convertir de decimal a octal pulsa 7 \n ");

    scanf("%d", &menu);

    for (menu>=1 ; menu<=6; menu--){
        switch (menu){
            case'1':
                printf("Dame un número binario\n");
                scanf("%s", & *binario);
                num= conv_binario_decimal (*binario);
                printf("Su numero en base decimal es: %d \n", num);
                break;
            case'2':
                printf("Dame un número decimal\n");
                scanf("%d", &num);
                *binario= conv_decimal_buinario (num);
                printf("Su numero en base binaria es: %s \n", *binario);
                break;
            case'3':
                printf("Dame un número decimal\n");
                scanf("%d", & num);
                *hex= conv_decimal_hexadecimal (num);
                printf("Su numero en base hexadecimal es: %d \n", *hex);
                break;
            case'4':
                printf("Dame un número hexadecimal\n");
                scanf("%s", & *hex);
                num= conv_hexadecimal_decimal (*hex);
                printf("Su numero en base decimal es: %d \n", num);
                break;
            case'5':
                printf("Dame un número octal\n");
                scanf("%s", & *octal);
                num= conv_octal_decimal (*octal);
                printf("Su numero en base decimal es: %d \n", num);
                break;
            case'6':
                printf("Dame un número decimal\n");
                scanf("%d", &num);
                *octal= conv_decimal_octal (num);
                printf("Su numero en base octal es: %d \n", num);
                break;
        }
    }
}