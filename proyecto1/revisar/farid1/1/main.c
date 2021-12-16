
#include "polinomio.h"
//polinomios=p1,...,p10
//p1=t1|(1.0,1)| t2|(2.0,2)|
//...
//p10=t1|(5.0,2)| t2|(6.6,3)| t3 |(6.6,9)|
//Las var globales son: numpolinomios(se altera si se agregan o eliminan)
//varlor minimo de polinomios es variable global fija (polmin)


FILE *fp;
int main(){
	int s1,s2,g1,g2;
	float esc,c1,c2;
	polinomio p=NULL;
	fp=fopen("polinomio.txt","r");
	if(fp==NULL){
		printf("Este programa permite realizar operaciones entre polinomios\n");
		printf("Al no contar con archivo, se necesitan introducir al menos 10 polinomios\n");
		p=InsPolinomio(p,polimin);
	}else{
		printf("El archivo ya contiene elementos");
	}
	
	
	int opc;
	while(opc!=11){
		//system("clear");
		printf("\nEste programa permite realizar operaciones entre polinomios\n");
		printf("Menu:\n");
		printf("1.-Suma\n");
		printf("2.-Resta\n");
		printf("3.-Multiplicacion\n");
		printf("4.-Multiplicacion por un escalar\n");
		printf("5.-Division de polinomio entre monomio\n");
		printf("6.-Division del polinomio entre binomio\n");
		printf("7.-Consultar polinomio\n");
		printf("8.-Agregar polinomios\n");
		printf("9.-Borrar polinomio\n");
		printf("10.-Ver todos los polinomios\n");
		printf("11.-Salir\n");
		printf("Ingresa la opcion que deseas: ");
		__fpurge(stdin);
		scanf("%d",&opc);
		switch(opc){
			case 1:
				printf("Escogiste suma\n");
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s2);
				printf("El primer polinomio es: ");
				consultaPoli(p,s1-1);
				printf("\n");
				printf("El segundo polinomio es: ");
				consultaPoli(p,s2-1);
				printf("\n");
				if((s1<=numpolinomios&&s1>=1)||(s2<=numpolinomios&&s1>=1)){
					p=sumaresta(p,s1-1,s2-1,0);
					printf("\n");
				}else{
					printf("Los polinomios que escogiste no son validos");
				}
			break;
			case 2:
				printf("Escogiste resta\n");
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s2);
				printf("El primer polinomio es: ");
				consultaPoli(p,s1-1);
				printf("\n");
				printf("El segundo polinomio es: ");
				consultaPoli(p,s2-1);
				printf("\n");
				if((s1<=numpolinomios&&s1>=1)||(s2<=numpolinomios&&s1>=1)){
					p=sumaresta(p,s1-1,s2-1,1);
					printf("\n");
				}else{
					printf("Los polinomios que escogiste no son validos");
				}
			break;
			case 3:
				printf("Escogiste multiplicacion\n");
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Selecciona el primer polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s2);
				printf("El primer polinomio es: ");
				consultaPoli(p,s1-1);
				printf("\n");
				printf("El segundo polinomio es: ");
				consultaPoli(p,s2-1);
				printf("\n");
				if((s1<=numpolinomios&&s1>=1)||(s2<=numpolinomios&&s1>=1)){
					multiplica(p,s1-1,s2-1);
					printf("\n");
				}else{
					printf("Los polinomios que escogiste no son validos");
				}
			break;
			case 4:
				printf("Escogiste multiplicacion por un escalar\n");
				printf("Selecciona un polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Escribe el escalar: ");
				__fpurge(stdin);
				scanf("%f",&esc);
				if(s1<=numpolinomios&&s1>=1){
					p=multiplicaEscalar(p,s1-1,esc);
				}else{
					printf("Los polinomios que escogiste no son validos");
				}
			break;
			case 5:
				printf("Escogiste division entre monomio\n");
				printf("Selecciona un polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Escribe el coeficiente del monomio: ");
				__fpurge(stdin);
				scanf("%f",&c1);
				printf("Escribe el grado del monomio: ");
				__fpurge(stdin);
				scanf("%d",&g1);

				if(s1<=numpolinomios&&s1>=1){
					p=DivMono(p,s1-1,c1,g1);
				}else{
					printf("Los polinomios que escogiste no son validos");
				}
			break;
			case 6:
				printf("Escogiste division entre binomio\n");
				printf("Selecciona un polinomio: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				printf("Escribe el coeficiente 1 del binomio: ");
				__fpurge(stdin);
				scanf("%f",&c1);
				printf("Escribe el grado 1 del binomio: ");
				__fpurge(stdin);
				scanf("%d",&g1);
				printf("Escribe el coeficiente 2 del binomio: ");
				__fpurge(stdin);
				scanf("%f",&c2);
				printf("Escribe el grado 2 del binomio: ");
				__fpurge(stdin);
				scanf("%d",&g2);
				

				if(s1<=numpolinomios&&s1>=1){
					p=DivBin(p,s1-1,c1,g1,c2,g2);
				}else{
					printf("Los polinomios que escogiste no son validos");
				}

			break;
			case 7:
				printf("Escogiste consultar polinomio\n");
				printf("Selecciona el id del polinomio a consultar");
				__fpurge(stdin);
				scanf("%d",&s1);
				if(s1<=numpolinomios&&s1>=1){
					consultaPoli(p,s1-1);
				}else{
					printf("El polinomio que escogiste no es valido");
				}

			break;
			case 8:
				printf("Escogiste agregar polinomios\n");
				printf("Selecciona la cantidad de polinomios a agregar: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				p=InsPolinomio(p,s1);
				printf("\nSe han agregado %d polinomios",s1);
			break;
			case 9:
				printf("Escogiste borrar polinomio\n");
				printf("EScribe el id del polinomio a borrar: ");
				__fpurge(stdin);
				scanf("%d",&s1);
				if(s1<=numpolinomios&&s1>=1){
					p=DelPolinomio(p,s1-1);
				}else{
					printf("El polinomio que escogiste no es valido");
				}
				printf("\nSe han agregado %d polinomios",s1);
			break;
			case 10:
			ImpPolinomio(p);
			break;
			case 11:
				printf("Gracias por usar el programa\n");
			break;
			default:
				printf("Esa opcion no es valida\n");

		}


	}
	//Se escribe en el archivo
	fp=fopen("polinomio.txt","w+");
	for (int i = 0; i < numpolinomios; ++i)
	{	
		fprintf(fp,"P( %d )= ",p[i].numt);
		for (int j = 0; j < p[i].numt; ++j)
		{	
			if (j==p[i].numt-1)
			{
				fprintf(fp,"( %0.2f )X^ %d",p[i].t[j].coeficiente,p[i].t[j].grado);
			}else{
				fprintf(fp,"( %0.2f )X^ %d +",p[i].t[j].coeficiente,p[i].t[j].grado);
			}

		}

		fprintf(fp,"\n");
	}
	
	fclose(fp);
	//Se vacia el arreglo de polinomios
	for (int i = 0; i < numpolinomios; ++i)
	{
		free(p[i].t);
	}
	free(p);


	return 0;
}
