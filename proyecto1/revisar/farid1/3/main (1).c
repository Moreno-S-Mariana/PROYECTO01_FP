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
int valorinicial=0;
int numpolinomios=0;
int polimin=2;
polinomio InsPolinomio(polinomio p, int numpoli){
	p=realloc(p,sizeof(struct polinomio)*(numpoli+valorinicial));

	for (int i = valorinicial; i < numpoli+valorinicial; ++i)
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
	numpolinomios=numpolinomios+numpoli;
	valorinicial=numpolinomios;
	return p;

}

polinomio DelPolinomio(polinomio p,int polid){
	int i=0;
	polinomio ptemp=NULL;
	ptemp=realloc(ptemp,sizeof(struct polinomio)*(numpolinomios-1));
	if(numpolinomios<=polimin)
		return p;
	else if(numpolinomios-1<=polimin){
		return p;
	}
	else{
			while(i<polid){
				ptemp[i].numt=p[i].numt;
				ptemp[i].t=(termino) malloc(sizeof(struct termino)*ptemp[i].numt);
				for (int j = 0; j < p[i].numt; ++j)
				{
				ptemp[i].t[j].coeficiente=p[i].t[j].coeficiente;
				ptemp[i].t[j].grado=p[i].t[j].grado;
				}
				i++;
				}
			while(i<numpolinomios-1){
				ptemp[i].numt=p[i+1].numt;
				ptemp[i].t=(termino) malloc(sizeof(struct termino)*ptemp[i].numt);
				for (int j = 0; j < p[i+1].numt; ++j)
				{
				ptemp[i].t[j].coeficiente=p[i+1].t[j].coeficiente;
				ptemp[i].t[j].grado=p[i+1].t[j].grado;
				}
				i++;
				}
		numpolinomios--;
		valorinicial=numpolinomios-1;
		return ptemp;
		}
	}
void ImpPolinomio(polinomio p){
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
}
void consultaPoli(int pospoli, polinomio p){
	printf("El polinomio consultado es: \n");
	printf("P(%d)=",pospoli+1);
		for (int j = 0; j < p[pospoli].numt; ++j)
		{	
			if (j==p[pospoli].numt-1)
			{
				printf("(%0.2f)X^%d",p[pospoli].t[j].coeficiente,p[pospoli].t[j].grado);
			}else{
				printf("(%0.2f)X^%d+",p[pospoli].t[j].coeficiente,p[pospoli].t[j].grado);
			}

		}

}

int main(){
	polinomio p=NULL;
	//Arreglo inicial debe ser mayor o igual a 10 polinomios
	p=InsPolinomio(p,polimin);
	ImpPolinomio(p);


	p=InsPolinomio(p,3);
	ImpPolinomio(p);
	//consultaPoli(2,p);
	p=DelPolinomio(p,4);
	ImpPolinomio(p);
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