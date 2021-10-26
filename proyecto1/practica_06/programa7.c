#include <stdio.h>
//%d, %i,%u para enteror

int main(){
    int x, y;
    x=5;
    printf("x=%i\n ", x);
    y=3;
    printf("y=%i\n ", y);
    x*=4;
    printf("x=%i\n ", x);
    x*=y;
    printf("x=%i\n ", x);
    return 0;

}