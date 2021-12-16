#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <stdio.h>

FILE *in_file;
FILE *out_file;

float complex_static_memory [10][2]; //memoria para guardar los comlejos 
float **complex_dynamic_memory;  // Es un doble apuntador  //Quiero un apuntador que apunta a arreglos de dos flotantes  
float countMemory;

float* complex_add (float c1[2], float c2[2]);
float* complex_sub (float c1[2], float c2[2]);
float* complex_con (float c1[2]);
float* complex_mul_scalar (float s, float c2[2]);
float* complex_mul (float c1[2], float c2[2]);
float* complex_div (float c1[2], float c2[2]); 

void complex_print (float c[2]);
void complex_write (float c[2]);
void complex_read (float c[2]);

float **create_memory ();
float **resize (int n );
void delete_memory (float**);
void init();

void open_in_file (char *filename);
void open_out_file (char *filename);
void close_file (FILE *f);

void memory_read (float c[2]);
void memory_write ( float c[2]);
void memory_delete (); 
#endif 
