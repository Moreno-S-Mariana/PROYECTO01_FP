#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__ 

#include <stdio.h>

FILE *in_file;
FILE *out_file;
float complex_static_memory[10][2];
float **omplex_dynamic_memory;
int countMemory;

float* poli_sum ( float pol[][], float pol2 [][]);
float* poli_rest ( float pol[][], float pol2 [][]);
float* poli_mulesc ( float pol[][], float s);
float* poli_mul ( float pol[][], float pol2 [][]);
float* poli_div_mon ( float pol[][], float mon [1][1]);
float* poli_div_bin ( float pol[][], float pol2 [][]);
void poli_scan (int grado, float pol[][]);

#endif