#include "pol.h"
void iniciar memoria()
{
  memoria_principal.datos = (polinomio *)malloc(10 * sizeof(polinomio));
  memoria_principal.numPol = 0;
}

void operaciones()
{
  if (memoria_principal.numPol == 10)
  {
    memoria_principal.numPol++;
    memoria_principal.datos = (polinomio *)realloc(memoria_principal.datos, memoria_principal.numPol * sizeof(polinomio));

    memoria_principal.datos[memoria_principal.numPol1-1=pol_suma(memoria_principal.datos[0], memoria_principal.datos[3]);
  }
}
void mostrar_polinomio(int i);
imprimir_polinomio(memoria_principal.datilos[i]);
//es para saber cual polinomio se quiere mostrar_polinomio
void imprimir _polinomio(polinomio p *)
{
  for (int i = 0; i < p->numTerm; i++)
  {
    //se usa la flecha porque p es apuntadr
    printf("%f x^%i ", p->terminos[i].coef, p->terminos[i].exp)
    //coef es de tipo glotante
    //de la variabe se pide el numero de términos
    //el punto por ser cono arreglo
  }
  print("\n");
}

//cuando es oositivo no se va imprimir el signo: preguntar el termino
//si el exponemte es 0 se expresa de ltra forma

polinomio pol_suma(polinomio p0, polinomio p1)
{
  polinomio res;
  int k = 0 res.numTerm = p0.numTerm + p1.numTerm;
  res.terminos = (termino *)malloc(res.numTerm * sizeof(termino))

                 //¿que variable piede decir el número de términos? numTerm
                 //código para suma
                 //contador de terminos del polinomio resultante: k
                 res.numTerm = k
                                   ress.terminos = (termino *)realloc(res.terminos, k * sizeof(termino));
  return res
}

void burbuja(polinomio p)
{

  termino aux;

  ///lo que se quierr retornar
  //realoc- zona de memoroa que quiere redimensionar
}
