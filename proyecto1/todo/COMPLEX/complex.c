#include "complex.h"
#include <stdlib.h>

// FUNCION PARA INICIAR EL PROGRAMA CON LOS VALORES PREDEFINIDOS
//NO RECIBE O RETORNA NADA 

void init ()
{
    countMemory=0;
    **complex_dynamic_memory=NULL;
    // todo numero que pretende ser flotante deve de terminar con una f minuscula
    // todo decimal que no termine con una f minuscula se vuelve de tipo double 
    for (int  i=0 ; i <0; i++)
    {
        for (int  j=0 ; j <0; j++)
        {
            complex_memory [i][j]=0.0f;
        }
    }
}

// ESTA FUNCION RESERVA MEMORIA PARA LA PARTE DINAMICA DE ALMACENAMIENTO
// PARAMETRO: N NÚMERO DE LOCALES PARA RESERVAR
//@ RETURN EL PAUNTADOR A LA ZONA DE MEMORIA RESERVADA 


float **create_memory (int n)
{
    float **memory;
    memory =  (float** ) malloc (n* sizeof (float*));
    for (int  i=0 ; i <2; i++)
    {
        memory [i] = (float*) malloc (2* sizeof (float));
    }
    return memory;
}


/**
 * realoc hace mas pequeña la zona de memoria reservada pero su trabajo es practicamente el mismo qeu malloc
 * 
 * @brief sirve para cambiar el tamaño de la memoria dinamica
 * 
 * @param  n numero de elementos a indicar o reducir
 * 
 * @return apuntador a la zona de memoria reservada 
 * */



float **resize (int n )
{
    int tam = countMemory -10 +n;
    float **memory;
    memory = (float **) reallloc (complex_dynamic_memory,2*tam*sizeof(float));
    return memory;
}

void delete_memory (float **mem)
{
    int tam =countMemory -10;
    for (int  i=0 ; i <tam; i++)
    free (mem[i]);
    free (mem);
}

void open_in_file (char *filename)
{
    in_file = open (filename, "r"); // r+ es para leer y escribir en el archivo r=read w Write
    if (!in_file)
    {
        printf(" No tienes permisos suficientes para abrir %s \n", filename);
    }
}

void open_out_file (char *filename)
{
    out_file = open (filename, "w"); // r+ es para leer y escribir en el archivo r=read w Write
    if (!out_file)
    {
        printf(" No tienes permisos suficientes para abrir %s \n", filename);
    }
}

void close_file ( FILE * f)
{
    fclose(f);// no devo dejar un archivo abierto
}

void complex_read (float c2[2])
{
    if (in_file)// para ver que el archivo este abierto
    {
        fscanf (in_file, "%f\t %f", & c[0], &c[1]);
        //recibe tres parametros el apuntador al archivo de lo que quiero leer, el tipo de dato y donde quiero guardarlo
    }
    else
    {
        printf("No hay archivo abierto \n ");
    }
}

void complex_write (float c[2])
{
    if (out_file)
    {
        fprintf (out_file, "%f \t %f \n ", c[0], c[1]);
    }
    else
    {
        printf("no hay un archivo abierto");
    }
}

void complex_scan (float c[2])
{
    scanf("%f \t %f  ", &c[0], &c[1]);
}

void complex_print (float c[2])
{
    (c[1] >=0.0)?
        printf("%f + %fi \n", c[0], c[1]);
        printf("%f  %fi \n", c[0], c[1]);
}


//FUNCIONES POR EQUIPOS 

    // UTILIZA APUNTADORES NO ARREGLOS
        //REGRESAR UN APUNTADOR QUE REGRESE LA DIRECCION A LA QUE SE QUIERE REGRESAR 
float* complex_mul (float c1[2], float c2[2])
{
    float mul[2];
    mul[0]= (c1[0]*c2[0])- (c1[1]*c2[1]);
    mul[1]=(c1[0]*c2[2])+(c2[0]*c1[1]);
    return mul;
}

float* complex_mul_scalra (float s, float c2[2] )
{
    float mulesc [2];
    mulesc[0]= s*c2[0];
    mulesc[1]= s*c2[1];
    return mulesc;
}

float *complex_add (float c[2], float c2[2])
{
    float *res =(float *) malloc (2* sizeof (float));
    res[0] =c[0]+ c2[0];
    res[1] =c[1]+ c2[1];
    return res;
}


// LAS VARIABLES LOCALES SE LOCALIZAN EN LA PILA POR LO QUE CUNADO SE DESTRUYE LA FUNCION SE DESTRULLE LA ZONA DE MEMOERIA OCUPADA POR LA FUNCION 


int main()
{
    float c1 [2], c2[2];
    float *ptr ;
    complex_scan (c1);
    complex_scan (c2);
    ptr = complex_add (c1,c2);
    free (ptr);
    return 0;
}

// EN CLASE 

/**
 * (a+bi)*(c+di)
 *
 * */

float *complex_mul( float c[2], float c2[2])
{
    float *res = (float * ) malloc (2* sizeof (float));
    res [0]= (c[1]*c2[1] *-1) + c[0]*c2 [0];
    res[2]= (c[0]* c2[1])+(c[1]*c2[0]);
    return res;
}


float *complex_div ( float c[2], float c2[2])
{
    float *res = (float *) malloc (2* sizeof (float));
    float div = c2 [0] *c2 [0]+  c2[1] *c2[1];
    res [0] = (c [0]* c2[0] + c[1] * c2[1])/div ;
    res[1]= (c [0]* c2[0] - c[1] * c2[1])/div

}


// ESTA FUNCION BORRA UN DATO DE LA MEMORIA 

/**
 * @brief borra el ultimo dato almacenado en la memoria, si esta almacenado en la memoria estática, disminuye countMemory en 1, 
 * si esta en la memoria dinámica, redimensiona el tamaño eliminando el último elemento 
 * */

void memory_delete ( )
{
    if (countMemory <10)// TODAVIA ESTAMOS ALMACENANDO EN LA MEMORIA ESTATICA 
    {
        countMemory -- ;
    }
    else 
    {
        complex_dynamic_memory =resize ( countMemory -1); // DE LO QUE TENGAS EN LA MEMORIA DINAMICA BORRA EL ULTIMO 
        countMemory --;
    }
}

void memory_write ( float c[2])
{
    if (countMemory >=0 && countMemory <10 )
    {
        complex_static_memory [ countMemory][0]= c[0];
        complex_static_memory [countMemory][1]= c[1];
        countMemory++;
    }
    else 
    if (countMemory >=20)
    {
        complex_dynamic_memory = rezise (countMemory);
        complex_dynamic_memory = [countMemory -10 ][0] = c[0];
        complex_dynamic_memory = [countMemory -10 ][1] = c[1];    
        countMemory ++;
    }
}

void memory_read (float c[2], int n)
{
    if (n< countMemory )
    {
        c[0] =complex_static_memory [n] [0];
        c[1] =complex_static_memory [n] [1];
    }
    else 
    {
        c[0] =complex_static_memory [n] [0];
        c[1] =complex_static_memory [n] [1];
    }
    else
    {
        prfintf("Error de segmentacion en la memoria \n")
    }
}