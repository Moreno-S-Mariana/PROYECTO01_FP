#include"funcions.h"
/**
 * @brief Invierte una cadena de caracteres
 * 
 * @param a es la cadena
 */
void reverse_change(char a[]){
    char b;
    for (int i = 0; i < (strlen(a)/2); i++)
    {
        b=a[i];
        a[i]=a[strlen(a)-1-i];
        a[strlen(a)-1-i]=b;
    }
}

/**
 * @brief Imprime una cadena al reves
 * 
 * @param reversa es la cadena original a voltear
 */
void reverse(char reversa[]){
    for(int j=strlen(reversa)-1; j >=0; j-- ){
            printf("%c", reversa[j]);
        }
}
/**
 * @brief Convierte de binario a decimal
 * 
 * @param binario es la cadena que se va a comvertir
 */
void conv_bin_decimalF(char binario[]){
    int num=0, pot=0;
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1')
            num= num+pow(2, pot);
        pot=pot+1;            
    }    
    printf("El numero decimal equivale a: %d ", num);
    printf("\n");
}
/**
 * @brief Convierte de binario a hexadecimal 
 * 
 * @param binario es la cadena a convertir en otra cadena llamada hexadecimal
 */
void conv_bin_hexaF(char binario[]){
    int num=0, pot=0, t=0;
    char *hexa=NULL;
    hexa=(char *)malloc(sizeof(char*));
    strcpy(hexa, "");
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1'){
            num= num+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            t=num % 16;
            num=(int)(num/16);
            switch (t){
                case 0:
                    strcat(hexa, "0");
                    break;
                case 1:
                    strcat(hexa, "1");
                    break;  
                case 2:
                    strcat(hexa, "2");
                    break;
                case 3:
                    strcat(hexa, "3");
                    break; 
                case 4:
                    strcat(hexa, "4");
                    break; 
                case 5:
                    strcat(hexa, "5");
                    break;
                case 6:
                    strcat(hexa, "6");
                    break;
                case 7:
                    strcat(hexa, "7");
                    break;
                case 8:
                    strcat(hexa, "8");
                    break;
                case 9:
                    strcat(hexa, "9");
                    break;
                case 10:
                    strcat(hexa, "A");
                    break;
                case 11:
                    strcat(hexa, "B");
                    break;
                case 12:
                    strcat(hexa, "C");
                    break;
                case 13:
                    strcat(hexa, "D");
                    break;
                case 14:
                    strcat(hexa, "E");
                    break;  
                case 15:
                    strcat(hexa, "F");
                    break;      
                }
            } while (num!= 0);
        printf("\n");
        printf("El numero en hexadecimal equivale a: ");
        reverse(hexa);
        printf("\n");
        free(hexa);
        hexa=NULL;
}
/**
 * @brief Conversion de binario a octal que es otra cadena
 * 
 * @param binario es la cadena a converti
 */
void conv_bin_octF(char binario[]){
    int num=0, pot=0, r=0;
    char *oct=NULL;
    oct=(char *)malloc(sizeof(char*));
    strcpy(oct, "");
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1'){
            num= num+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            r=num%8;
            num=(int)(num/8);
            switch (r){
                case 0:
                    strcat(oct, "0");
                    break;
                case 1:
                    strcat(oct, "1");
                    break;
                case 2:
                    strcat(oct, "2");
                    break;
                case 3:
                    strcat(oct, "3");
                    break;
                case 4:
                    strcat(oct, "4");
                    break;       
                case 5:
                    strcat(oct, "5");
                    break;
                case 6:
                    strcat(oct, "6");
                    break;
                case 7:
                    strcat(oct, "7");
                    break;                       
                default:
                    printf("Incorrecto.");
                    break;
            }    
            }while (num!=0);
        printf("\n");
        
        printf("El numero en octal es: ");
        reverse(oct);    
        printf("\n");
        free(oct);
        oct=NULL;
} 
/**
 * @brief Conversion de decimal a binario
 * 
 * @param num es el numero a convertir en binario
 */
void conv_dec_binF(int num){
    int t=0;
    char *binario=NULL; 
    binario=(char*)malloc(sizeof(char*));
    strcpy(binario, "");
    do{
        t=num%2;
        num=(int)(num/2);
        if(t==1) {
            strcat(binario, "1");
        }
        else{ 
            strcat(binario, "0"); 
        }    
        }while(num!=0);
    /* if (num== 1){ 
        strcat(binario, "1");
    } */
    printf("Tu numero en binario es: ");
    reverse(binario);
    printf("\n");
    free(binario);
    binario=NULL;
}
/**
 * @brief Conversion de decimal a hexadecimal
 * 
 * @param num es el numero a convertir
 */
void conv_dec_hexaF(int num){
    int t=0;
    char *hexa=NULL;
    hexa=(char*)malloc(sizeof(char*));
    strcpy(hexa,"");
    do
    {
        t=num % 16;
        num=(int)(num/16);
        switch (t){
        case 0:
            strcat(hexa, "0");
            break;
        case 1:
            strcat(hexa, "1");
            break;  
        case 2:
            strcat(hexa, "2");
            break;
        case 3:
            strcat(hexa, "3");
            break; 
        case 4:
            strcat(hexa, "4");
            break; 
        case 5:
            strcat(hexa, "5");
            break;
        case 6:
            strcat(hexa, "6");
            break;
        case 7:
            strcat(hexa, "7");
            break;
        case 8:
            strcat(hexa, "8");
            break;
        case 9:
            strcat(hexa, "9");
            break;
        case 10:
            strcat(hexa, "A");
            break;
        case 11:
            strcat(hexa, "B");
            break;
        case 12:
            strcat(hexa, "C");
            break;
        case 13:
            strcat(hexa, "D");
            break;
        case 14:
            strcat(hexa, "E");
            break;  
        case 15:
            strcat(hexa, "F");
            break;      
        }
    } while (num!=0);
    printf("\n");
    printf("El numero en hexadecimal equivale a: ");
    reverse(hexa);
    printf("\n");
    free(hexa);
    hexa=NULL;
}
/**
 * @brief Conversion de decimal a octal
 * 
 * @param num es el decimal a convertir
 */
void conv_dec_octF(int num){
    int r=0;
    char *oct=NULL;
    oct=(char*)malloc(sizeof(char*));
    strcpy(oct,"");
    do{
        r=num%8;
        num=(int)(num/8);
        switch (r)
        {
        case 0:
            strcat(oct,"0");
            break;
        case 1:
            strcat(oct,"1");
            break;
        case 2:
            strcat(oct,"2");
            break;
        case 3:
            strcat(oct,"3");
            break;
        case 4:
            strcat(oct,"4");
            break;       
        case 5:
            strcat(oct,"5");
            break;
        case 6:
            strcat(oct,"6");
            break;
        case 7:
            strcat(oct,"7");
            break;              
        }
    }while (num!=0); 
    printf("\n");
    printf("El numero en octal es: ");
    reverse(oct);
    printf("\n");
    free(oct);
    oct=NULL;
}
/**
 * @brief Conversion de hexadecimal a binario
 * 
 * @param hexa es la cadena que se desea convertir
 */
void conv_hexa_binF(char hexa[]){
    int x=0, size=0;
    char *binario=NULL;
    size=strlen(hexa);
    binario=(char *)malloc(sizeof(char*));
    strcpy(binario, "");    
    for (x=0; x<size; x++)
    {
        switch(hexa[x]){
            case '0':
                strcat(binario, "0000");
                break;    
            case '1':
                strcat(binario, "0001");
                break;
            case '2':
                strcat(binario, "0010");
                break;
            case '3':
                strcat(binario, "0011");
                break;
            case '4':
                strcat(binario, "0100");
                break;
            case '5':
                strcat(binario, "0101");
                break;        
            case '6':
                strcat(binario, "0110");
                break;
            case '7':
                strcat(binario, "0111");
                break;
            case '8':
                strcat(binario, "1000");
                break;
            case '9':
                strcat(binario, "1001");
                break;
            case 'A': case 'a':
                strcat(binario, "1010");
                break;
            case 'B': case 'b':
                strcat(binario, "1011");
                break;
            case 'C': case 'c':
                strcat(binario, "1100");
                break;
            case 'D': case 'd':
                strcat(binario, "1101");
                break;
            case 'E': case 'e':
                strcat(binario, "1110");
                break;
            case 'F': case 'f':
                strcat(binario, "1111");
                break;
        }
    }
    printf("\nEl numero en binario equivale a: %s", binario);
    printf("\n");
    free(binario);
    binario=NULL;    
}

/**
 * @brief Conversion de hexadecimal a decimal 
 * 
 * @param hexa es la cadena a convertir
 */
void conv_hexa_decF(char hexa[]){
    long long num=0;
    int i=0,j;
    for(j=strlen(hexa)-1;j>=0;j--){ 
    switch(hexa[j]){
        case '0':
			i++;
            break;
		case '1':
			num+=1*pow(16,i);
			i++;
            break;
		case '2':
			num+=2*pow(16,i);
			i++;
            break;
		case '3':
			num+=3*pow(16,i);
			i++;
            break;
		case '4':
			num+=4*pow(16,i);  
			i++;
            break;
		case '5':
			num+=5*pow(16,i);
			i++;
            break;
		case '6':
			num+=6*pow(16,i);
			i++;
            break;
		case '7':
			num+=7*pow(16,i);
			i++;
            break;
		case '8':
			num+=8*pow(16,i);
			i++;
            break;
		case '9':
			num+=9*pow(16,i);
			i++;
            break;
		case 'A': case 'a':
			num+=10*pow(16,i);
			i++;
            break;
		case 'B': case 'b':
			num+=11*pow(16,i);
			i++;
            break;
		case 'C': case 'c':
			num+=12*pow(16,i);
			i++;
            break;
		case 'D': case 'd':
			num+=13*pow(16,i);
			i++;
            break;
		case 'E': case'e':
			num+=14*pow(16,i);
			i++;
            break;
		case 'F': case 'f':
			num+=15*pow(16,i);
			i++;
            break;
        }
    }
    printf("El numero decimal equivale a: %lld",num);
    printf("\n");
}
/**
 * @brief Conversion de octal a binario
 * 
 * @param oct es la cadena a convertir
 */
void conv_oct_binF(char oct[]){
    int b=0, size=0, def=0;
    char *binario=NULL;
    size=strlen(oct);
    binario=(char*)malloc(sizeof(char*));
    strcpy(binario, ""); //inicializar cadena vacia bin
    for (b=0; b<size; b++){ //recorre cadena desde inicio a fin
        switch (oct[b]){ //ingresar arreglo a switch y evalua de inicio a fin
            case '0':
                strcat(binario, "000");
                break;
            case '1':
                strcat(binario, "001");
                break;
            case '2':
                strcat(binario, "010");
                break;
            case '3':
                strcat(binario, "011");
                break;
            case '4':
                strcat(binario, "100");
                break;        
            case '5':
                strcat(binario, "101");
                break;    
            case '6':
                strcat(binario, "110");    
                break;
            case '7':
                strcat(binario, "111");
                break;
            default:
                def+=5;
                break;     
            }
    }
    if (def!=0){
        printf("Numero octal no valido");
        printf("\n");
    }
    else{
    printf("\nEl numero en binario equivale a: %s", binario);
    printf("\n");
    }
    free(binario);
    binario=NULL;
}
/**
 * @brief Conversion de octal a decimal
 * 
 * @param oct es la cadena que se convierte a decimal
 */
void conv_oct_decF(char oct[]){
    long long dec=0, i=0, def=0;
    reverse_change(oct);
    while(oct[i]!='\0'){ 
        switch(oct[i]){
            case '0':
                i++;
                break;
            case '1':
                dec+=1*pow(8,i);
                i++;
                break;
            case '2':
                dec+=2*pow(8,i);
                i++;
                break;
            case '3':
                dec+=3*pow(8,i);
                i++;
                break;
            case '4':
                dec+=4*pow(8,i);  
                i++;
                break;
            case '5':
                dec+=5*pow(8,i);
                i++;
                break;
            case '6':
                dec+=6*pow(8,i);
                i++;
                break;
            case '7':
                dec+=7*pow(8,i);
                i++;
                break;   
            }
        }
    printf("El numero decimal equivale a: %lld",dec);
    printf("\n");	
}