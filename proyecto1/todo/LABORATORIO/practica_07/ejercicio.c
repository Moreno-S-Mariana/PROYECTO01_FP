
/*   
        1. Elaborar un algoritmo que de solución a la siguiente función

                        |    y^3             Si y  mod 4 = 0
                        |
                        |    (y^2 -14)/y~~3  Si y mod 4 = 1
                f(y)=   |
                        |    y^3+5           Si y mod 4 = 2
                        |
                        |_    sqrt(y)         Si y mod 4 = 3

*/

#include <stdio.h>
#include <math.h>
int main(){
    int num=0;
    float z=0;
    printf("Dame un múmero para dar solución a la ecuación \n");
    scanf("%i", &num);
    if ( num % 4 ==0)
    {
        z=pow (num , 3 );
        printf("El resultado de f(y)= %.4f\n", z);
    }
    else 
    { 
        if (num % 4==1)
        {
            z= ((pow( num,2))-14)/ pow (num,3);
            printf("El resultado de f(y)= %.4f\n", z);
        }
            else
                {
                    if  (num % 4==2) 
                        {
                            z= (pow (num, 3))+5;
                            printf("El resultado de f(y)= %.4f\n", z);
                        }
                            else 
                                {
                                    if (num % 4 ==3)
                                        {
                                            z= sqrt (num);
                                            printf("El resultado de f(y)= %.4f\n", z);
                                        }
    }}}
    return 0;
} 
