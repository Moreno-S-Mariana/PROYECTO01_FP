#include "funciones.h"
#include <stdlib.h>

/**
 * @brief Función para iniciar el programa con  los valores
 * predefinidos
 */
void init(){
	countMemory = 0;
	complex_dynamic_memory = NULL;
	for(int i = 0; i < 10; i ++){
		for(int j=0; j < 2; j++){
			complex_static_memory[i][j]= 0.0f;
		}
	}
}

/**
 * @brief reserva memoria para la parte dinámica de alamacenamiento
 *
 * @param n número de localidades a reservar
 * @return memory el apuntador a la zona de memoria reservada
 */
float **create_memory(int n){
	float** memory;
	memory = (float**)malloc(n*sizeof(float*));
	for(int i = 0; i < 2; i++)
		memory[i] = (float*)malloc(2*sizeof(float));
	return memory;
}

/**
 * @brief Sirve para cambiar el tamaño de la memoria dinamica
 *
 * @param n número de elementos a incrementar o reducir
 * @return apuntador a la zona de memoria reservada
 * */
float **resize(int n){
	int tam = countMemory-10 + n;
	float **memory;
	memory = (float**)realloc(complex_dynamic_memory, 2*tam*sizeof(float));
	return memory;
}

void delete_memory(float **mem){
	int tam = countMemory-10;
	for(int i = 0; i<tam; i++)
		free(mem[i]);
	free(mem);
}

void open_in_file(char *filename){
	in_file = fopen(filename,"r");
	if(!in_file){
		printf("No tienes permisos suficientes para abrir %s\n", filename);
	}
}

void open_out_file(char *filename){
	out_file = fopen(filename, "w");
	if(!out_file){
		printf("No tienes permisos para abrir %s\n", filename);
	}
}

void close_file(FILE *f){
	fclose(f);
}

void complex_read(float c[2]){
	if(in_file){
		fscanf(in_file, "%f\t%f", &c[0], &c[1]);
	}else{
		printf("No hay archivo abierto\n");
	}
}	


void complex_write(float c[2]){
	if(out_file){
		fprintf(out_file, "%f\t%f\n",c[0],c[1]);
	}else
		printf("No hay un archivo abierto\n");
}

void complex_scan(float c[2]){
	scanf("%f\t%f", &c[0],&c[1]);
}

void complex_print(float c[2]){
	(c[1]>=0.0)?
		printf("%f + %fi\n",c[0], c[1]) :
		printf("%f %fi\n",c[0], c[1]);
}


float *complex_add(float c[2], float c2[2]){
	float *res =(float*)malloc(2*sizeof(float));	
	res[0] = c[0]+ c2[0];
	res[1] = c[1] + c2[1];
	return res;
}

float *complex_sub(float c[2], float c2[2]){
	float *res =(float*)malloc(2*sizeof(float));	
	res[0] = c[0] - c2[0];
	res[1] = c[1] - c2[1];
	return res;
}



float *complex_mul_scalar(float s, float c2[2])
{
	float *res = (float*)malloc(2*sizeof(float));
	res[0] = c2[0]* s;
	res[1] = c2[1]*s;
	return res;
}

/**
 * (a +bi)*(c +di)
 * */
float *complex_mul(float c[2], float c2[2])
{
	float *res = (float*)malloc(2*sizeof(float));
	res[0] = (c[1]*c2[1]*-1)+c[0]*c2[0];
	res[1] = (c[0]*c2[1])+(c[1]*c2[0]);
	return res;
}


float *complex_div(float c[2], float c2[2]){
	float *res = (float*)malloc(2*sizeof(float));
	float div = c2[0]*c2[0]+c2[1]*c2[1];
	res[0] = (c[0]*c2[0]+c[1]*c2[1])/div;
	res[1] = (c[1]*c2[0] - c[0]*c2[1])/div;
	return res;
}

/**
 * @brief borra el último dato almacenado en la memoria, si está
 * almacenado en la memoria estática, disminuye countMemory en 1
 * Si está en la memoria dinámica, redimensiona el tamaño eliminando el último elemento
 */
void memory_delete(){
	if(countMemory < 10){
		countMemory--;
	}else{
		complex_dynamic_memory = resize(countMemory-1);
		countMemory--;
	}
}

void memory_write(float c[2]){
	if(countMemory>=0 && countMemory <10){
		complex_static_memory[countMemory][0] = c[0];
		complex_static_memory[countMemory][1] = c[1];
		countMemory++;
	}else if(countMemory>=10){
		complex_dynamic_memory = resize(countMemory);
		complex_dynamic_memory[countMemory-10][0] = c[0];
		complex_dynamic_memory[countMemory-10][1] = c[1];
		countMemory++;
	}
}


void memory_read(float c[2], int n){
	if(n < countMemory){
		if(n < 10){
			c[0] = complex_static_memory[n][0];
			c[1] = complex_static_memory[n][1];
		}else{
			c[0] = complex_dynamic_memory[n-10][0];
			c[1] = complex_dynamic_memory[n-10][1];
		}
	}else{
		printf("Error de segmentación de memoria\n");
	}
}
