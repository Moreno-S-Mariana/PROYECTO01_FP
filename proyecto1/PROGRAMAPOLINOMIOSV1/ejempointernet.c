#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("  **  CALCULADORA DE POLINOMIOS  **\n\n");
    printf("  Hay que decir, que en ete programa se calculan polinomios en donde\n  solo hallan sumas, restas, multiplicaciones y divisiones");
    int;
    int numeros_polinomio;
    printf("\n\n  Bien. Diga de cuantos numeros se compone su polinomio a resolver:  ");
    scanf(" %d", &numeros_polinomio);
    int i, j, k=1, m, respuesta;
    int vector_numeros[253];
    int vector_signos[numeros_polinomio-1];
    printf("\n  Vale. Ahora vaya diciendo conforme se le indique, el valor de cada\n  numero, a la vez que se le preguntara que operacion realiza:  \n");
    for(i=0;i<numeros_polinomio;i++)
    {
        printf("\n  Valor del %dºnumero:  ", k);
        scanf(" %d", &m);
        vector_numeros[i] = m;
        k++;
        if(i<numeros_polinomio-1)
        {
        printf("\n  1-...mas...\n  2-...menos...\n  3-...por...\n  4-...entre...\n  ---Respuesta:  ");
        scanf(" %d", &respuesta);
        vector_signos[i] = respuesta;
        }
    }
    int a=0, b=0;
    int vector_comun_todo[200];
    for(i=0;i<((numeros_polinomio*2));i++)
    {
        if((i%2)==0)
        {
            vector_comun_todo[i] = vector_numeros[a];
            a++;
        }
        else if((i%2)!=0)
        {
            vector_comun_todo[i] = vector_signos[b];
            b++;
        }
    }
    char vector_simbologia[numeros_polinomio];
    printf("\n\n  Entendemos que su polinomio es:  ");
    for(i=0;i<(numeros_polinomio*2);i++)
    {
        if((i%2)==0)
        {
            printf("%d ", vector_comun_todo[i]);
        }
        else if((i%2)!=0)
        {
            if(vector_comun_todo[i] == 1)
            {
                vector_simbologia[i] = '+';
                printf("%c ", vector_simbologia[i]);
            }
            if(vector_comun_todo[i] == 2)
            {
                vector_simbologia[i] = '-';
                printf("%c ", vector_simbologia[i]);
            }
            if(vector_comun_todo[i] == 3)
            {
                vector_simbologia[i] = '*';
                printf("%c ", vector_simbologia[i]);
            }
            if(vector_comun_todo[i] == 4)
            {
                vector_simbologia[i] = '/';
                printf("%c ", vector_simbologia[i]);
            }
        }
    }
    int resultado;
    int x=0, y, z;
    int calculo_final[numeros_polinomio*2];
    for(i=1;i<(numeros_polinomio*2);i=i+2)
    {
        if(vector_comun_todo[i]==3)
        {
            y = vector_comun_todo[i-1];
            z = vector_comun_todo[i+1];
            vector_comun_todo[i-1] = y * z;
            vector_comun_todo[i] = 0;
            vector_comun_todo[i+1] = 0;
        }
        if(vector_comun_todo[i]==4)
        {
            y = vector_comun_todo[i-1];
            z = vector_comun_todo[i+1];
            vector_comun_todo[i-1] = y / z;
            vector_comun_todo[i] = 0;
            vector_comun_todo[i+1] = 0;
        }
    }
    for(i=0;i<(numeros_polinomio*2);i++)
    {
        if(vector_comun_todo[i]==0)
        {
            for(j=i;j<(numeros_polinomio*2);j++)
            {
                vector_comun_todo[j] = vector_comun_todo[j+2];
            }
            x += 2;
        }
    }
    for(i=1;i<((numeros_polinomio*2)-x);i=i+2)
    {
        if(vector_comun_todo[i]==1)
        {
            y = vector_comun_todo[0];
            z = vector_comun_todo[i+1];
            vector_comun_todo[0] = y + z;
            vector_comun_todo[i] = 0;
            vector_comun_todo[i+1] = 0;
        }
        if(vector_comun_todo[i]==2)
        {
            y = vector_comun_todo[0];
            z = vector_comun_todo[i+1];
            vector_comun_todo[0] = y - z;
            vector_comun_todo[i] = 0;
            vector_comun_todo[i+1] = 0;
        }
    }
    resultado = vector_comun_todo[0];
    printf("\n\n  El resultado final es:  %d  ", resultado);
    return 0;
}