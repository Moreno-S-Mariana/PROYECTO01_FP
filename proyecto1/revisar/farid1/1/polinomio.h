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
polinomio sumaresta(polinomio p, int polid1,int polid2,int op);

polinomio sumamulti(polinomio p, int polid1,int polid2);
polinomio multiplica(polinomio p, int p1, int p2);

void ImpPolinomio(polinomio p);
void consultaPoli(polinomio p,int pospoli);
polinomio multiplicaEscalar(polinomio p, int polid1, float escalar);
polinomio DivMono(polinomio p, int id, float c, int g);
#endif
