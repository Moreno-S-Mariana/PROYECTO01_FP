#ifndef FUNCIONES
#define FUNCIONES
#include<stdio.h>
#include<stdlib.h>

int valorinicial;
int numpolinomios;
int polimin;
typedef struct termino
	{
		float coeficiente;
		int grado;
	}*termino;
typedef struct polinomio
{
	termino t;	
	int numt;
}*polinomio;


termino ordenaGrado(polinomio p, int polid);
polinomio InsPolinomio(polinomio p, int numpoli);
polinomio DelPolinomio(polinomio p,int polid);
polinomio suma(polinomio p, int polid1,int polid2);
void ImpPolinomio(polinomio p);
void consultaPoli(polinomio p,int pospoli);
polinomio multiplicaEscalar(polinomio p, int polid1, float escalar);
#endif
