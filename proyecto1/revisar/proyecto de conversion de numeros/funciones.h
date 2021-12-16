#ifndef FUNCIONES_H
#define FUNCIONES_H

int conv_binario_decimal(char binario[]);
void conv_decimal_binario(int num, char *binario);
int conv_hexa_decimal(char hex[]);
void conv_decimal_hexa(int num,char *hexa);
int conv_octal_decimal(char octal[]);
void conv_decimal_octal(int num, char *octal);
void conv_octal_binario(char *octal, char *binario);
void conv_binario_octal(char *binario, char *octal);
void conv_hexa_binario(char *hexa, char *binario);
void conv_binario_hexa(char *binario, char *hexa);

#endif