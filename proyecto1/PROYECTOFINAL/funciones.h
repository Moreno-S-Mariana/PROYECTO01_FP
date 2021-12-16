#ifndef __POLINOMIO_H__
#define __POLINOMIO_H__

/**
 * struct
 *  fragmento de codigo que nos permite agrupar variables
*/


struct _termino {
    float coef;
    int exp;
};

typedef struct _termino TERMINO;
//TYPEDEF sirve para renombrar

typedef TERMINO* POL;
// UN APUNTADOR A TERMINO PERO NO QUIRO QUE SE LLAME TERMINO QUIERO QUE SE LLAME POL


/*
POL p1;
//TERMINO p2[5] es lo mismo que lo de abajo
p1= (POL) malloc (3* sizeof(TERMINO));

p1[0].coef=2.0;
p1[0].exp=2;
p1[1].coef=1.0;
p1[1].exp=1.0;
p1[2].coef=1.0;
p1[2].exp=0;

*/




#endif 