
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main(){
    int a,b,c;
    float s, area;
    printf("Ingresa la de medición de los tres lados con un espacio en cada uno\n");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b)>c){
        if((a+c)>b){
            if((b+c)>a){
                printf("Los lados si corresponden a un triangulo\n");
                if((a==b) && (a==c)){
                    printf("Es un triangulo equilatero\n");
                    }else if( (a!=b) && (a!=c) && (b!=c) ){
                        printf("Es un triangulo escaleno\n");
                        }else {
                            printf("Es un triangulo isosceles\n");
                            }
                            s=(a+b+c)/2;
                            area=sqrt(s*(s-a)*(s-b)*(s-c));
                            printf("El area es %f \n", area);
            }else{
                printf("Los lados no corresponde a un triangulo");  
    }
    }else{printf("Los lados no corresponde a un triangulo");  
    }
    }else{
        printf("Los lados no corresponde a un triangulo");
    }
}
