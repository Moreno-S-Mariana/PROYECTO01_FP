#include"polinomio.h"
//int valorinicial=0;
int numpolinomios=0;
int polimin=2;
termino ordenaGrado(polinomio p, int polid){
	//Aqui se ordenan los grados del polinomio[identificador de polinomio]

	int gradotemp;             //Variables temporales.
	float coeficientetemp;
	for (int i=1;i<p[polid].numt;i++)
	{
	       for (int j=0; j < p[polid].numt-i ;j++) // for(j=0; j < Nelementos-i; j++) es menor y no menor igual
	       {
	          if (p[polid].t[j].grado > p[polid].t[j+1].grado)//Condicion mayor-menor
	          {
	            gradotemp=p[polid].t[j].grado;
	            coeficientetemp=p[polid].t[j].coeficiente;

	            p[polid].t[j].grado=p[polid].t[j+1].grado;
	            p[polid].t[j].coeficiente=p[polid].t[j+1].coeficiente;


	            p[polid].t[j+1].grado=gradotemp;
	            p[polid].t[j+1].coeficiente=coeficientetemp;
	          }
	       }
	}
	return p[polid].t;
}
termino quitaceros(polinomio p, int polid){
	//Aqui se ordenan los grados del polinomio[identificador de polinomio]
	//ttemp=realloc(ttemp,sizeof(struct termino)*(p[polid].numt));
	int gradotemp;             //Variables temporales.
	float coeficientetemp;
	for (int i=0;i<p[polid].numt;i++){
		if(p[polid].t[i].coeficiente==0){
			for (int j = i; j < p[polid].numt-1; ++j)
			{
				p[polid].t[j].coeficiente=p[polid].t[j+1].coeficiente;
				p[polid].t[j].grado=p[polid].t[j+1].grado;
			}
			p[polid].numt--;
			i--;
		}
	}
	
	return p[polid].t;
}

polinomio InsPolinomio(polinomio p, int numpoli){
	p=realloc(p,sizeof(struct polinomio)*(numpoli+numpolinomios));

	for (int i = numpolinomios; i < numpoli+numpolinomios; ++i)
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
		p[i].t=quitaceros(p,i);
		p[i].t=ordenaGrado(p,i);

	}
	numpolinomios=numpolinomios+numpoli;
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
void consultaPoli(polinomio p,int pospoli){
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

polinomio sumaresta(polinomio p, int polid1, int polid2,int op){
	//El nuevo polinomio va a ser el ultimo que se va agregar
	p=realloc(p,sizeof(struct polinomio)*(1+numpolinomios));
	p[numpolinomios].numt=0;
	int idn=0;
	int hayigual;

	for (int i=0;i<p[polid1].numt;i++)
	{	
		p[numpolinomios].numt++;
		p[numpolinomios].t=realloc(p[numpolinomios].t,(sizeof(struct termino)*p[numpolinomios].numt));
		hayigual=0;
	       for (int j=0; j < p[polid2].numt;j++)
	       {
	        if (p[polid1].t[i].grado == p[polid2].t[j].grado)
	          {
	          //Aqui se suman los coeficientes termuinos de i  y de j y se asignan al nuevo polinomio
	           if(op==0){
	           	p[numpolinomios].t[idn].coeficiente=p[polid1].t[i].coeficiente+p[polid2].t[j].coeficiente;
	           	p[numpolinomios].t[idn].grado=p[polid1].t[i].grado;
	           	
	           }else{
	           	p[numpolinomios].t[idn].coeficiente=p[polid1].t[i].coeficiente-p[polid2].t[j].coeficiente;
	           	p[numpolinomios].t[idn].grado=p[polid1].t[i].grado;

	           }
	           hayigual=1;
	          }
	       }
	       if(!hayigual){
	       	p[numpolinomios].t[idn].coeficiente=p[polid1].t[i].coeficiente;
	        p[numpolinomios].t[idn].grado=p[polid1].t[i].grado;
	       }
	       idn++;

	}
	for (int i=0;i<p[polid2].numt;i++)
	{	
		hayigual=0;
	       for (int j=0; j < p[polid1].numt;j++)
	       {
	        if (p[polid2].t[i].grado == p[polid1].t[j].grado)
	          {
	           hayigual=1;
	          }
	       }
	       if(!hayigual){
	       	p[numpolinomios].numt++;
			p[numpolinomios].t=realloc(p[numpolinomios].t,(sizeof(struct termino)*p[numpolinomios].numt));
	       	if(op==0){
	       		p[numpolinomios].t[idn].coeficiente=p[polid2].t[i].coeficiente;
	        	p[numpolinomios].t[idn].grado=p[polid2].t[i].grado;
	       	}else{
	       		p[numpolinomios].t[idn].coeficiente=-p[polid2].t[i].coeficiente;
	        	p[numpolinomios].t[idn].grado=p[polid2].t[i].grado;
	       	}

	       	
	        idn++;
	       }
	}
	//Se ordena
	p[numpolinomios].t=quitaceros(p,numpolinomios); 
	p[numpolinomios].t=ordenaGrado(p,numpolinomios);
	numpolinomios++;
	return p;
}

//P(2)=2x2+1x3+3x4

//P(5)=2x+3x3+1x6
//P(2)=2x2+1x3+3x4

//P(N)=2x2+4x3+3x4+2x

polinomio multiplicaEscalar(polinomio p, int polid1, float escalar){
	
	//El nuevo polinomio va a ser el ultimo que se va agregar
	p=realloc(p,sizeof(struct polinomio)*(numpolinomios+1));
	p[numpolinomios].numt=p[polid1].numt;
	//Agrega la memoria necesaria del polid1 para el nuevopolinomio
	p[numpolinomios].t=(termino) malloc(sizeof(struct termino)*p[numpolinomios].numt);

	for (int i=0;i<p[numpolinomios].numt;i++)
	{	
		p[numpolinomios].t[i].coeficiente=p[polid1].t[i].coeficiente*escalar;	
		p[numpolinomios].t[i].grado=p[polid1].t[i].grado;	
	}
	p[numpolinomios].t=quitaceros(p,numpolinomios);
	p[numpolinomios].t=ordenaGrado(p,numpolinomios);
	numpolinomios++;

	return p;
}


polinomio multiplica(polinomio p, int p1, int p2){
	p=realloc(p,sizeof(struct polinomio)*(numpolinomios+1));
	p[numpolinomios].numt=0;
	polinomio p3=(polinomio)malloc(sizeof(struct polinomio)*p[p1].numt);
	for (int i = 0; i < p[p1].numt; ++i)
	{
		p3[i].numt=0;
		//printf("P(%d)= ",i+1);
		for (int j = 0; j< p[p2].numt; ++j)
		{
			p3[i].numt++;
			p3[i].t=realloc(p3[i].t,(sizeof(struct termino)*p3[i].numt));
			p3[i].t[j].grado=p[p1].t[i].grado+p[p2].t[j].grado;
			p3[i].t[j].coeficiente=p[p1].t[i].coeficiente*p[p2].t[j].coeficiente;
			//printf("(%0.2f)+X^%d",p3[i].t[j].coeficiente,p3[i].t[j].grado);
		}
		//printf("\n");
	}
	for(int i=0;i<p[p1].numt-1;i++){
		p3=sumamulti(p3, p[p1].numt-1, i);
	}
	
	//p[numpolinomios].t=p3[p[p1].numt].t;
	//p[numpolinomios].numt=p3[p[p1].numt].numt;
	 
	
	p[numpolinomios].t=quitaceros(p,numpolinomios); 
	p[numpolinomios].t=ordenaGrado(p,numpolinomios);
	numpolinomios++;
	return p;
}
polinomio sumamulti(polinomio p, int polid1, int polid2){
	int cantidad=polid1+1;
	p=realloc(p,sizeof(struct polinomio)*(cantidad+1));
	p[cantidad].numt=0;
	int idn=0;
	int hayigual;

	for (int i=0;i<p[polid1].numt;i++)
	{	
		p[cantidad].numt++;
		p[cantidad].t=realloc(p[cantidad].t,(sizeof(struct termino)*p[cantidad].numt));
		hayigual=0;
	       for (int j=0; j < p[polid2].numt;j++)
	       {
	        if (p[polid1].t[i].grado == p[polid2].t[j].grado)
	          {
	          //Aqui se suman los coeficientes termuinos de i  y de j y se asignan al nuevo polinomio
	           	p[cantidad].t[idn].coeficiente=p[polid1].t[i].coeficiente+p[polid2].t[j].coeficiente;
	           	p[cantidad].t[idn].grado=p[polid1].t[i].grado;
	           hayigual=1;
	          }
	       }
	       if(!hayigual){
	       	p[cantidad].t[idn].coeficiente=p[polid1].t[i].coeficiente;
	        p[cantidad].t[idn].grado=p[polid1].t[i].grado;
	       }
	       idn++;

	}
	for (int i=0;i<p[polid2].numt;i++)
	{	
		hayigual=0;
	       for (int j=0; j < p[polid1].numt;j++)
	       {
	        if (p[polid2].t[i].grado == p[polid1].t[j].grado)
	          {
	           hayigual=1;
	          }
	       }
	       if(!hayigual){
	       	p[cantidad].numt++;
			p[cantidad].t=realloc(p[cantidad].t,(sizeof(struct termino)*p[numpolinomios].numt));
	       	p[cantidad].t[idn].coeficiente=p[polid2].t[i].coeficiente;
	        p[cantidad].t[idn].grado=p[polid2].t[i].grado;
	       	

	       	
	        idn++;
	       }
	}
	return p;
}
polinomio DivMono(polinomio p, int id, float c, int g){
	//El nuevo polinomio va a ser el ultimo que se va agregar
	if(p[id].t[0].grado<g){
		printf("No se puede realizar la division");
		return p;
	}else{
		p=realloc(p,sizeof(struct polinomio)*(numpolinomios+1));
		p[numpolinomios].numt=p[id].numt;
		//Agrega la memoria necesaria del polid1 para el nuevopolinomio
		p[numpolinomios].t=(termino) malloc(sizeof(struct termino)*p[numpolinomios].numt);

		for (int i=0;i<p[numpolinomios].numt;i++)
		{	
			p[numpolinomios].t[i].coeficiente=p[id].t[i].coeficiente/c;	
			p[numpolinomios].t[i].grado=p[id].t[i].grado-g;	
		}
		p[numpolinomios].t=quitaceros(p,numpolinomios);
		p[numpolinomios].t=ordenaGrado(p,numpolinomios);
		numpolinomios++;

		return p;
	}	
}
polinomio DivBin(polinomio p, int id, float c1, int g1, float c2, int g2){
	//Se ordena el binomio segun elgrado de menor a mayor g2 es mayor que g1
	polinomio ptemp=(polinomio)malloc(sizeof(struct polinomio));
	polinomio binomio=(polinomio)malloc(sizeof(struct polinomio));
	int tempi;
	float tempf;
	if(g2<g1){
		tempf=c2;
		c2=c1;
		c1=tempf;
		tempi=g2;
		g2=g1;
		g1=tempi;
	}
	if(p[id].t[0].grado<g1){
		printf("No se puede realizar la division");
		return p;
	}else{
		


		return p;
	}	
}
