#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <stdio.h>

FILE *in_file;
FILE *out_file;
float complex_static_memory[10][2];
float **complex_dynamic_memory;
int countMemory;

float* complex_add(float c[2], float c2[2]);
float* complex_sub(float c[2], float c2[2]);
float* complex_con(float c[2]);
float* complex_mul_scalar(float s, float c[2]);
float* complex_mul(float c[2], float c2[2]);
float* complex_div(float c[2], float c2[2]);
void complex_scan(float c[2]);
void complex_print(float c[2]);
void complex_write(float c[2]);
void complex_read(float c[2]);
float **create_memory(int n);
float **resize(int n);
void delete_memory(float **);
void init();
void open_in_file(char *filename);
void open_out_file(char *filename);
void close_file(FILE *f);
void memory_read(float c[2], int n);
void memory_write(float c[2]);
void memory_delete();


#endif
