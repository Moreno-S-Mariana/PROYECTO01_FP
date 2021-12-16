#ifndef __POLINOMIOS_H__
#define __POLINOMIOS_H__

struct _termino
{
    float coefi;
    int exp;
};

typedef struct _termino termino;

struct _polinomio
{
    int grado;
    int numTerm;
    termino *terminos; //terminos[grado+1];
};

typedef struct polinomio
{
    /* data */
};


#endif // !__POLINOMIOS_H__