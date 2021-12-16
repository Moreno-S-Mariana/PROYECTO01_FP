CC= gcc 
CCDEBUG= -g -Wall
CCSTD= -std=c99
CCFLAGS= $(CCSTD) $(CCDEBUG)
LIBS= -lm
CFILES= ecuaciones main

FILES=$(addsuffix .c, $(CFILES))
OBJS= $(addsuffix .o, $(CFILES))

#Las banderas nos sirven para activar el depurador
#los rchivos , o son intermedios para ayudar al compilador y hacer más rapido

EXE=solucion

.PHONY: all

all: ecuaciones main wc 

ecuaciones: ecuaciones.c ecuaciones.h #ecuaciones.c $<
	$(CC) $(CCFLAGS) -c $< -o ecuaciones.o $(LIBS)

main: main.c ecuaciones.h
	$(CC) $(CCFLAGS) -c $< -o main.o

wc: $(FILES)
	$(CC) $(CCFLAGS) -o $(EXE) $(OBJS) $(LIBS)