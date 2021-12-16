#include"funcions.h"

int main(){
    int o;
    long num;
    char binario[100], hexa[100], oct[100];
    strcpy(hexa, "");
    strcpy(binario, "");
    strcpy(oct, "");
    do{
        printf("Calculadora de conversiones:");
        printf("\n1.Convertir de binario a decimal.");
        printf("\n2.Convertir de binario a hexadecimal.");
        printf("\n3.Convertir de binario a octal.");
        printf("\n4.Convertir de decimal a binario.");
        printf("\n5.Convertir de decimal a hexadecimal.");
        printf("\n6.Convertir de decimal a octal.");
        printf("\n7.Convertir de hexadecimal a binario.");
        printf("\n8.Convertir de hexadecimal a decimal.");
        printf("\n9.Convertir de octal a binario.");
        printf("\n10.Convertir de octal a decimal.");
        printf("\n11.Salir.");
        printf("\n ¿Que operacion deseas realizar?: ");
        scanf("%d", &o);
        switch (o){
            case 1:
                printf("\nHas seleccionado convertir de binario a decimal");
                printf("\nIngresa tu numero binario: ");
                scanf("%s", binario);
                conv_bin_decimalF(binario);
                break;
            case 2:
                printf("\nHas seleccionado convertir de binario a hexadecimal.");
                printf("\nIngresa tu numero binario: ");
                scanf("%s", binario);
                conv_bin_hexaF(binario);
                break;
            case 3:
                printf("\nHas seleccionado convertir de binario a octal.");
                printf("\nIngresa tu numero binario: ");
                scanf("%s", binario);
                conv_bin_octF(binario);
                break;
            case 4:
                printf("\nHas seleccionado convertir de decimal a binario.");
                printf("\nIngresa tu numero decimal: ");
                scanf("%ld", &num);
                conv_dec_binF(num);
                break;        
            case 5:
                printf("\nHas seleccionado convertir de decimal a hexadecimal.");
                printf("\nIngresa tu numero decimal: ");
                scanf("%ld", &num);
                conv_dec_hexaF(num);
                break; 
            case 6:
                printf("\nHas seleccionado convertir de decimal a octal.");
                printf("\nIngresa tu numero decimal: ");
                scanf("%ld", &num);
                conv_dec_octF(num);
                break;
            case 7:
                printf("\nHas seleccionado convertir de hexadecimal a binario.");
                printf("\nIngresa tu numero hexadecimal: ");
                scanf("%s", hexa);
                conv_hexa_binF(hexa);
                break;
            case 8:
                printf("\nHas seleccionado convertir de hexadecimal a decimal.");
                printf("\nIngresa tu numero hexadecimal: ");
                scanf("%s", hexa);
                conv_hexa_decF(hexa);
                break;
            case 9:
                printf("\nHas seleccionado convertir de octal a binario.");
                printf("\nIngresa tu numero octal: ");
                scanf("%s", oct);
                conv_oct_binF(oct);
                break;
            case 10:
                printf("\nHas seleccionado convertir de octal a decimal.");
                printf("\nIngresa tu numero octal: ");
                scanf("%s", oct);
                conv_oct_decF(oct);
                break;                
            default:
                break;
        }
        printf("\n");
        printf("\n");
    }while(o!=11 && o>0 && o<11);
    return 0;
}