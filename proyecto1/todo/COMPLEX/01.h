#ifndef __COMPLEX_H__
#define __COMPLEX_H__

//complejo= float var [2];   va a ser un arreglo de dos flotantes 

float memoria [10][2]; // variable global al programa 

//TAREA PARA EL JUEVES CREAL LOS DIIAGRAMAS DE FLUJO PARA LOS PROTOTIPOS DE LAS SIGUENETES FUNCIONES 

void suma (float c1[2], float c2[2], float res[2]);
void resta (float c1[2], float c2[2], float res [2]);
void conjugado (float c1[2], float res [2]);
void multiplicacion (float s, float c2[2], float res [2]);
void multiplicacion (float c1[2], float c2[2], float res [2]);
void division (float c1[2], float c2[2], float res [2] ); 

float *suma_prt (float *c1, float *c2);
float *resta_prt (float *c1, float *c2);
float *conjugado_prt (float *c1);
float *multiplicacion_prt (float *c1, float *c2);
float *multiplicacion_prt (float *c1, float *c2);
float *division_prt (float *c1, float *c2 ); 

#endif 
