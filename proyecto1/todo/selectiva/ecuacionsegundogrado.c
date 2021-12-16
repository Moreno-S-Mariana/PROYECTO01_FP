//Dar solución a una ecuacion de segundo grado

#include <stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float d;
    float x1,x2,r,i;

    printf("Ingresa el valor de los coeficientes\n");
    scanf("%f %f %f ", &a, &b, &c);
    if (a==0){
        printf("La ecuación es de segundo grado \n");
    } else{
        d= b*b-4*a*c;
        if (d>0){
            x1= (-b + sqrt(d))/ (2*a);
            x2= (-b - sqrt(d))/ (2*a);
            printf("El valor de x1 es : %f\n", x1 );
            printf("El valor de x2 es : %f\n", x2 );
        }
        else if(d==0){
            x1=-b/(2*a);
            x2=x1;
            printf("El valor de x1 es : %f\n", x1 );
            printf("El valor de x2 es : %f\n", x2 );
        }
        else if (d<0){
            r=-b /(2*a);
            i=surt (fabsf(d))/(2*a); //fabsf es para el valor absoluto de un flotante 
            printf("El valor de x1 es : %f + %f\n", r, i );
            printf("El valor de x2 es : %f - %f\n", r, i );
        }
    }

    return 0;
}