#include<stdio.h>
#include<stdlib.h>
//polinomios=p1,...,p10
//p1=t1|(1.0,1)| t2|(2.0,2)|
//...
//p10=t1|(5.0,2)| t2|(6.6,3)| t3 |(6.6,9)|
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
int main(){
	int numpolinomios=10;
	polinomio p=(polinomio)malloc(sizeof(struct polinomio)*numpolinomios);

	for (int i = 0; i < numpolinomios; ++i)
	{
		printf("Introduce el polinomio %d: ",i+1);
		printf("Dame el numero de terminos del polinomio: ");
		__fpurge(stdin);
		scanf("%d",&p[i].numt);
		p[i].t=(termino) malloc(sizeof(struct termino)*p[i].numt);
		for (int j = 0; j < p[i].numt; ++j)
		{
			printf("Dame el coeficiente del termino %d: ",i+1);
			__fpurge(stdin);
			scanf("%f",&p[i].t[j].coeficiente);
			printf("Dame el grado del termino %d: ",i+1);
			__fpurge(stdin);
			scanf("%d",&p[i].t[j].grado);
		}
	}

	for (int i = 0; i < numpolinomios; ++i)
	{	
		printf("P(%d)=",i+1);
		for (int j = 0; j < p[i].numt; ++j)
		{	
			if (j==p[i].numt-1)
			{
				printf("(%0.2f)X^%d",p[i].t[j].coeficiente,p[i].t[j].grado);
			}else{
				printf("(%0.2f)X^%d+",p[i].t[j].coeficiente,p[i].t[j].grado);
			}

		}
		printf("\n");
	}
	
	for (int i = 0; i < numpolinomios; ++i)
	{
		free(p[i].t);
	}
	free(p);
	return 0;
}
/*
	printf("Este programa permite realizar operaciones entre polinomios\n");
	printf("Al no contar con archivo, se necesitan introducir al menos 10 polinomios\n");
	printf("Menu:\n");
	printf("Suma\n");
	printf("Resta\n");
	printf("Multiplicacion\n");
	printf("Multiplicacion por un escalar\n");
	printf("Division de polinomio entre monomio\n");
	printf("Division del polinomio entre binomio\n");*/