#ifndef __MATRICES_H__
#define __MATRICES_H__

void mat_read(int *ptr, int n, int m);
void mat_print (int *ptr, int n, int m);
void *mat_add(int *ptrA, int *ptrB, int n, int m);
void *mat_mul(int *ptrA, int *ptrB, int n, int m, int m2);
void *mat_add2(int **matA, int **matB, int n, int m);