#ifndef _POL_H_
#define _POL_H_
//variable que permite guardar distintos tipos syruc 
struc _termino{
  float coef;
  int ex
  };
  typedef struct _termino termino;
  /*
  permite elasignara un nombre alternativo a un tipo, para no estar escribiendo struct_termino
  *consideramos importante de un polinomio es el 
  **grado
  **nunero de terminos
  */
  
  struct_polinomio
    int grado;
    int numTerm;
    termino terminos[grado+1];
    
    
    //¿Que se quiere guaradar en el arreglo? Términos
    //El arreglo se debe declara dando el tipo y un nombre a la variable en este caso "terminos"
    //Lo maximo qie se debe tener: 
    //Algo que funcione paraecido a arreglos: apuntador
    };
    typedf struct _polinomio memoria;
    
    memoria memoria_principal;
    

    polinomio pol_suma(polinomio *,polinomio );
    polinomio *pol_resta(polinomio *,polinomio *);
    polinomio *pol_multiplicacion(polinomio *,polinomio *);
    polinomio *pol_multiplicavion_escalar(polinomio *,polinomio *);
    //un flotante oara abarcar mas 
    polinomio *pol_division(polinomio *,polinomio *);
    polinomio *pol_division_binomio(polinomio *,polinomio *);
    //¿que hay ene la memoria? lo que va recibir: apuntador
    
   //se debe tenerbuna memoria inicial de 10 polinomios y que eta pueda crecer> para esto se puede usar otro apuntador
   //El tipo del apuntador es polinomio
   
   void iniciar_memoria
   void agregar_polinomio_teclado();
   //variable que -> memoria principal
   //numPol almacena la variable datos
   polinomio *crear_polinomio(int grado, int numTerm);
   void liberar_memeoria (polinomio*);
   void borbuja(polinomio*);
   void mostrar_polinomio(int i);
   //es oara saber cual polinomio se quiere mostrar_polinomio
   void imprimir _polinomio(polinomio*);
   
  #endif // !_POL_H_