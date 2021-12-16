CC= gcc # la EL COMPILADOR que se va a utilizar 
# el - es una forma de ingresar opciones 
CCDEBUG = -g -wall #opción para mostrar algunas advertencias sobre construcciones  
CCCSTD= -std=c11 #estandar del lenguaje c en este caso 2011
CCFLAGS= -Who-deprecate-register -O0 $(CCDEBUG ) $(CCSTD) # son las banderas que se concidera necesario meter $ banderas de depuracion y compilacion $()
EXE=proyecto1.out #nobre del archivo a compilar 

COBJ= main funciones #nobre de los archivos a compilar pero sin la extensión 
FILES = $(addsuffix .c, $(OBJ)) #le va a agregar a los archivos de OBJ a compilar el .c 
OBJS=$(addsuffix .o, $(COBJ)
CLEANLIST=$(addsuffix .o, $(COBJ)) #limpiar la lista 
#se puede usar para varios lenguajes de programacion 
#O0 es o mayuscula 0
#tambien puede ser wc: $(FILES) "enter" $(cc)$(CCFLAGS) -o $(EXE) $(FILES) -lm en lugar de $(MAKE) $(OBJS)
#wc es lo que nos va a compilar 

.PHONY :all
all: wc

wc:$(FILES)
	$(MAKE) $(OBJS) 